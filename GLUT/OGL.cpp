#include <GL/freeglut.h> // C:\freeglut\include\GL

bool bIsFullScreen = false; 

int main(int argc, char* argv[])
{
	//function declaration 
	void Initialize(void);
	void Resize(int, int);
	void Display(void);
	void Keyboard(unsigned char, int, int);
	void Mouse(int, int, int, int);
	void Uninitialize(void);

	//code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My First RTR7 Program: Shubhangi Pardeshi");

	Initialize();

	glutReshapeFunc(Resize);
	glutDisplayFunc(Display);
	glutKeyboardFunc(Keyboard);
	glutMouseFunc(Mouse);
	glutCloseFunc(Uninitialize);

	glutMainLoop(); 

	//flow should not come here
	return(0);
}

void Initialize(void) {

	//code 
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void Resize(int width, int height) {

	//code 
	if (height <= 0)
		height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
}

void Display(void) {

	//code 
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); 

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd(); 

	glutSwapBuffers();
}

void Keyboard(unsigned char key, int x, int y){

	//code
	switch (key)
	{
	case 27: 
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bIsFullScreen == false)
		{
			glutFullScreen();
			bIsFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bIsFullScreen = false;
		}
		break; 
	default:
		break;
	}

}

void Mouse(int button, int state, int x, int y) {

	//code
	switch (button)
	{
	case GLUT_RIGHT_BUTTON: 
		glutLeaveMainLoop();
		break; 
	default:
		break;
	}
}

void Uninitialize(void) {

	//code
}
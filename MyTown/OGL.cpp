#include <GL/freeglut.h> 

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
	glutCreateWindow("My RTR7 first code: Shubhangi Pardeshi");

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
	//glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void Resize(int width, int height) {

	//code 
	if (height <= 0)
		height = 1;

	//glMatrixMode (GLenum mode);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
}

void Display(void) {

	//code 
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); 

	// upper Background
	glBegin(GL_QUADS);

	glColor3f(90.0f / 255.0f, 177.0f / 255.0f, 206.0f / 255.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glColor3f(26.0f / 255.0f, 26.0f / 255.0f, 26.0f / 255.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glColor3f(26.0f / 255.0f, 26.0f / 255.0f, 26.0f / 255.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glColor3f(90.0f / 255.0f, 177.0f / 255.0f, 206.0f / 255.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);

	// Lower Background
	glColor3f(24.0f / 255.0f, 24.0f / 255.0f, 38.0f / 255.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glEnd();
 
	//moon and stars..
	glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
	glRectd(0.21, 0.61, 0.215, 0.615);
	glRectd(0.31, 0.81, 0.315, 0.815);
	glRectd(0.11, 0.81, 0.115, 0.815);
	glRectd(0.11, 0.41, 0.115, 0.415);
	glRectd(0.51, 0.51, 0.515, 0.515);
	glRectd(0.91, 0.91, 0.915, 0.915);
	glRectd(-0.71, 0.91, -0.715, 0.915);
	glRectd(-0.51, 0.51, -0.515, 0.515);
	glRectd(-0.31, 0.81, -0.315, 0.815);

    //Mountains 
	glBegin(GL_TRIANGLES);

	//1
	glColor3f(225.0f / 255.0f, 235 / 255.0f, 244.0f / 255.0f);
	glVertex3f(0.24f, 0.0f, 0.0f);
	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glVertex3f(0.65f, 0.6f, 0.0f);
	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glVertex3f(1.2f, 0.0f, 0.0f);
	
	//2
	glColor3f(213.0f / 255.0f, 220 / 255.0f, 226.0f / 255.0f);
	glVertex3f(-1.4f, 0.0f, 0.0f);
	glColor3f(213.0f / 255.0f, 220 / 255.0f, 226.0f / 255.0f);
	glVertex3f(-1.0f, 0.8f, 0.0f);
	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glVertex3f(-0.4f, 0.0f, 0.0f);

	//3
	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glVertex3f(-0.7f, 0.0f, 0.0f);
	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glVertex3f(-0.235f, 0.45f, 0.0f);
	glColor3f(225.0f / 255.0f, 235 / 255.0f, 244.0f / 255.0f);
	glVertex3f(0.25f, 0.0f, 0.0f);

	glEnd();

	//house
	glColor3f(51.0f / 255.0f, 51.0f / 255.0f, 0.0f / 255.0f);
	glRectd(0.37, 0.25, 0.41, 0.35);

	glBegin(GL_TRIANGLES);

	glColor3f(16.0f/255.0f, 70.0f/255.0f, 96.0f/255.0f);
	glVertex3f(0.3f, 0.3f, 0.0f);
	glVertex3f(0.12f, 0.18f, 0.0f);
	glVertex3f(0.5f, 0.18f, 0.0f);

	glVertex3f(0.3f, 0.35f, 0.0f);
	glVertex3f(0.12f, 0.2f, 0.0f);
	glVertex3f(0.5f, 0.2f, 0.0f);

	glEnd();

	glColor3f(28.0f / 255.0f, 100.0f / 255.0f, 125.0f / 255.0f);
	glRectd(0.2, 0.0, 0.4, 0.2);

	//window
	glColor3f(232.0f / 255.0f, 232.0f / 255.0f, 125.0f / 255.0f);
	glRectd(0.25, 0.05, 0.35, 0.1);

	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.25f, 0.07f, 0.0f); 
	glVertex3f(0.35f, 0.07f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.3f, 0.05f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);
	glEnd();

	//dhur...
	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(0.375, 0.36, 0.405, 0.38);
	
	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(0.36, 0.38, 0.42, 0.42);

	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(0.345, 0.42, 0.435, 0.45);

	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(0.335, 0.45, 0.445, 0.47);

	//Lower ground and trees 
	
	glBegin(GL_TRIANGLES);

	glColor3f(31.0f / 255.0f, 40.0 / 255.0f, 77.0f / 255.0f);
	glVertex3f(-0.25f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 0.1f, 0.0f);

	glColor3f(0.0f / 255.0f, 26.0 / 255.0f, 51.0f / 255.0f);
	glVertex3f(-1.0f, 0.1f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(0.95f, -1.0f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(0.7f, -0.2f, 0.0f);
	glVertex3f(0.75f, 0.3f, 0.0f);
	glVertex3f(0.8f, -0.2f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(0.5f, -0.4f, 0.0f);
	glVertex3f(0.55f, -0.1f, 0.0f);
	glVertex3f(0.6f, -0.4f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(-0.9f, -1.0f, 0.0f);
	glVertex3f(-0.8f, -0.2f, 0.0f);
	glVertex3f(-0.7f, -1.0f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(-0.77f, -1.0f, 0.0f);
	glVertex3f(-0.72f, -0.3f, 0.0f);
	glVertex3f(-0.65f, -1.0f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(-0.6f, -1.0f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f(-0.45f, -1.0f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(0.43f, -1.0f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.62f, -1.0f, 0.0f);

	glColor3f(3.0f / 255.0f, 3.0 / 255.0f, 3.0f / 255.0f);
	glVertex3f(0.7f, -1.0f, 0.0f);
	glVertex3f(0.74f, -0.6f, 0.0f);
	glVertex3f(0.86f, -1.0f, 0.0f);

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

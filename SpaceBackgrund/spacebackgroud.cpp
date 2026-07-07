#include <GL/freeglut.h>

bool bIsFullScreen = false;

//star positions (x, y) - simple fixed stars
float starX[80] = {
	-0.95f, -0.88f, -0.82f, -0.75f, -0.68f, -0.60f, -0.55f, -0.48f, -0.42f, -0.35f,
	-0.28f, -0.20f, -0.12f, -0.05f, 0.02f, 0.08f, 0.15f, 0.22f, 0.30f, 0.38f,
	0.45f, 0.52f, 0.60f, 0.68f, 0.75f, 0.82f, 0.90f, 0.95f, -0.90f, -0.72f,
	-0.58f, -0.40f, -0.22f, -0.08f, 0.10f, 0.28f, 0.48f, 0.65f, 0.85f, 0.92f,
	-0.78f, -0.62f, -0.45f, -0.30f, -0.15f, 0.05f, 0.20f, 0.42f, 0.58f, 0.78f,
	-0.85f, -0.50f, -0.18f, 0.12f, 0.35f, 0.55f, 0.72f, 0.88f, -0.65f, -0.38f,
	-0.10f, 0.18f, 0.45f, 0.62f, 0.80f, -0.92f, -0.33f, 0.00f, 0.32f, 0.70f,
	-0.70f, -0.25f, 0.25f, 0.50f, 0.85f, -0.48f, 0.08f, 0.40f, 0.68f, 0.98f
};

float starY[80] = {
	0.92f, 0.85f, 0.78f, 0.70f, 0.62f, 0.55f, 0.48f, 0.40f, 0.32f, 0.25f,
	0.18f, 0.10f, 0.02f, -0.05f, -0.12f, -0.20f, -0.28f, -0.35f, -0.42f, -0.50f,
	-0.58f, -0.65f, -0.72f, -0.78f, -0.85f, -0.90f, -0.95f, 0.88f, 0.60f, 0.35f,
	0.15f, -0.10f, -0.30f, -0.55f, -0.75f, 0.70f, 0.45f, 0.20f, -0.15f, -0.40f,
	0.50f, 0.30f, 0.05f, -0.20f, -0.45f, 0.65f, 0.40f, 0.10f, -0.25f, -0.60f,
	0.75f, -0.05f, 0.55f, -0.35f, 0.25f, -0.50f, 0.15f, -0.70f, 0.82f, -0.18f,
	0.38f, -0.42f, 0.60f, -0.62f, 0.05f, -0.82f, 0.48f, -0.55f, 0.72f, -0.30f,
	-0.65f, 0.22f, -0.48f, 0.35f, -0.88f, 0.58f, -0.72f, 0.12f, -0.38f, 0.68f
};

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
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My RTR7 Space Background: Shubhangi Pardeshi");

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
	int i = 0;

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//stars in space
	for (i = 0; i < 80; i++)
	{
		glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
		glRectd(starX[i], starY[i], starX[i] + 0.004, starY[i] + 0.004);
	}

	//extra bright blue stars (top left area)
	glColor3f(150.0f / 255.0f, 200.0f / 255.0f, 255.0f / 255.0f);
	glRectd(-0.80f, 0.75f, -0.792f, 0.758f);
	glRectd(-0.70f, 0.82f, -0.692f, 0.828f);
	glRectd(-0.60f, 0.70f, -0.592f, 0.708f);
	glRectd(-0.55f, 0.88f, -0.542f, 0.888f);
	glRectd(-0.45f, 0.78f, -0.442f, 0.788f);

	glutSwapBuffers();

}

void Keyboard(unsigned char key, int x, int y) {

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

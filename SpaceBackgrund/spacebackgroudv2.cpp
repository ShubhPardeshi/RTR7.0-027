#include <GL/freeglut.h>
#include <stdlib.h>

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
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My RTR7 Space Background v2 - Deep Space: Shubhangi Pardeshi");

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
	//deep space - pure black background
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
	int j = 0;
	int c = 0;
	float x = 0.0f;
	float y = 0.0f;

	//star clusters
	float clusterX[4] = { -0.82f, -0.45f, 0.35f, 0.78f };
	float clusterY[4] = { 0.62f, -0.55f, 0.40f, -0.72f };

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//nebula 
	glPushMatrix();
	glTranslatef(-0.72f, 0.50f, 0.0f);
	glColor3f(40.0f / 255.0f, 22.0f / 255.0f, 65.0f / 255.0f);
	glutSolidSphere(0.20, 14, 14); //outer
	glColor3f(30.0f / 255.0f, 45.0f / 255.0f, 80.0f / 255.0f);
	glutSolidSphere(0.14, 12, 12); //middle
	glColor3f(65.0f / 255.0f, 40.0f / 255.0f, 95.0f / 255.0f); 
	glutSolidSphere(0.08, 10, 10); //inner
	glPopMatrix();

	//stars
	for (i = 0; i < 200; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
		glRectd(x, y, x + 0.004, y + 0.004);
	}

	//star clusters
	for (c = 0; c < 4; c++)
	{
		for (j = 0; j < 8; j++)
		{
			x = clusterX[c] - 0.04f + (rand() % 80) / 1000.0f;
			y = clusterY[c] - 0.04f + (rand() % 80) / 1000.0f;

			glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
			glRectd(x, y, x + 0.005, y + 0.005);
		}
	}

	//bright giant star
	glPushMatrix();
	glTranslatef(0.25f, 0.21f, 0.0f);
	glColor3f(180.0f / 255.0f, 200.0f / 255.0f, 255.0f / 255.0f); 
	glutSolidSphere(0.025, 12, 12);
	glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 220.0f / 255.0f); //outer
	glRectd(-0.012f, -0.012f, 0.012f, 0.012f);
	glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f); //inner
	glRectd(-0.005f, -0.005f, 0.005f, 0.005f);
	glPopMatrix();

	//purple dots (10)
	for (i = 0; i < 10; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		glPushMatrix();
		glTranslatef(x, y, 0.0f);
		glColor3f(100.0f / 255.0f, 60.0f / 255.0f, 160.0f / 255.0f); //outer
		glutSolidSphere(0.012, 12, 12);
		glColor3f(170.0f / 255.0f, 110.0f / 255.0f, 220.0f / 255.0f); //inner
		glutSolidSphere(0.006, 10, 10);
		glPopMatrix();
	}

	//blue dots (10)
	for (i = 0; i < 10; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		glPushMatrix();
		glTranslatef(x, y, 0.0f);
		glColor3f(50.0f / 255.0f, 90.0f / 255.0f, 160.0f / 255.0f);
		glutSolidSphere(0.012, 12, 12); //outer
		glColor3f(120.0f / 255.0f, 180.0f / 255.0f, 255.0f / 255.0f);
		glutSolidSphere(0.006, 10, 10); //inner
		glPopMatrix();
	}

	//shooting star
	glBegin(GL_LINES);
	glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
	glVertex3f(0.45f, 0.85f, 0.0f);
	glVertex3f(0.75f, 0.68f, 0.0f);
	glEnd();

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

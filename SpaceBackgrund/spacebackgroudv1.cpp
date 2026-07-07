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
	float x = 0.0f;
	float y = 0.0f;

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glBegin(GL_QUADS);

	//Screen is divided into 4 vertical strips with different shades to create effect of sun light fading in from right to left.
	//r1 - leftmost - deep space black
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glColor3f(22.0f / 255.0f, 20.0f / 255.0f, 15.0f / 255.0f);
	glVertex3f(-0.5f, 1.0f, 0.0f);
	glColor3f(22.0f / 255.0f, 20.0f / 255.0f, 15.0f / 255.0f);
	glVertex3f(-0.5f, -1.0f, 0.0f);

	//r2 - left of center - very faint light
	glColor3f(22.0f / 255.0f, 20.0f / 255.0f, 15.0f / 255.0f);
	glVertex3f(-0.5f, -1.0f, 0.0f);
	glColor3f(22.0f / 255.0f, 20.0f / 255.0f, 15.0f / 255.0f);
	glVertex3f(-0.5f, 1.0f, 0.0f);
	glColor3f(40.0f / 255.0f, 38.0f / 255.0f, 28.0f / 255.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(40.0f / 255.0f, 38.0f / 255.0f, 28.0f / 255.0f);
	glVertex3f(0.0f, -1.0f, 0.0f);

	//r3 - right of center - yellow fade
	glColor3f(40.0f / 255.0f, 38.0f / 255.0f, 28.0f / 255.0f);
	glVertex3f(0.0f, -1.0f, 0.0f);
	glColor3f(40.0f / 255.0f, 38.0f / 255.0f, 28.0f / 255.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(70.0f / 255.0f, 64.0f / 255.0f, 45.0f / 255.0f);
	glVertex3f(0.5f, 1.0f, 0.0f);
	glColor3f(70.0f / 255.0f, 64.0f / 255.0f, 45.0f / 255.0f);
	glVertex3f(0.5f, -1.0f, 0.0f);

	//r4 - rightmost - light yellow sunlight
	glColor3f(70.0f / 255.0f, 64.0f / 255.0f, 45.0f / 255.0f);
	glVertex3f(0.5f, -1.0f, 0.0f);
	glColor3f(70.0f / 255.0f, 64.0f / 255.0f, 45.0f / 255.0f);
	glVertex3f(0.5f, 1.0f, 0.0f);
	glColor3f(95.0f / 255.0f, 85.0f / 255.0f, 60.0f / 255.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glColor3f(95.0f / 255.0f, 85.0f / 255.0f, 60.0f / 255.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glEnd();

	//stars (300)
	srand(1);

	for (i = 0; i < 300; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		//draw one small white star
		glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
		glRectd(x, y, x + 0.004, y + 0.004);
	}

	//purple dots (10)
	srand(2);

	for (i = 0; i < 10; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		glPushMatrix();

		glTranslatef(x, y, 0.0f);
		//outer
		glColor3f(100.0f / 255.0f, 60.0f / 255.0f, 160.0f / 255.0f);
		glutSolidSphere(0.012, 12, 12);
		//inner
		glColor3f(170.0f / 255.0f, 110.0f / 255.0f, 220.0f / 255.0f);
		glutSolidSphere(0.006, 10, 10);

		glPopMatrix();
	}

	//blue dots (10)
	srand(3);

	for (i = 0; i < 10; i++)
	{
		x = -1.0f + (rand() % 1000) / 500.0f;
		y = -1.0f + (rand() % 1000) / 500.0f;

		glPushMatrix();

		glTranslatef(x, y, 0.0f);
		//outer
		glColor3f(50.0f / 255.0f, 90.0f / 255.0f, 160.0f / 255.0f);
		glutSolidSphere(0.012, 12, 12);
		//inner
		glColor3f(120.0f / 255.0f, 180.0f / 255.0f, 255.0f / 255.0f);
		glutSolidSphere(0.006, 10, 10);

		glPopMatrix();
	}

	//satellite - near earth
	glPushMatrix();
	glTranslatef(-0.15f, 0.35f, 0.0f);

	//body
	glColor3f(180.0f / 255.0f, 180.0f / 255.0f, 180.0f / 255.0f);
	glRectd(0.0f, 0.0f, 0.08f, 0.06f);

	//solar panel l
	glColor3f(80.0f / 255.0f, 120.0f / 255.0f, 180.0f / 255.0f);
	glRectd(-0.12f, 0.01f, 0.0f, 0.05f);

	//solar panel r
	glColor3f(80.0f / 255.0f, 120.0f / 255.0f, 180.0f / 255.0f);
	glRectd(0.08f, 0.01f, 0.20f, 0.05f);

	//antenna
	glBegin(GL_LINES);
	glColor3f(220.0f / 255.0f, 220.0f / 255.0f, 220.0f / 255.0f);
	glVertex3f(0.04f, 0.06f, 0.0f);
	glVertex3f(0.04f, 0.12f, 0.0f);
	glEnd();

	glPopMatrix();

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

#include <GL/freeglut.h>
#include <math.h>

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
	glutCreateWindow("Scene 4");

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
	glClearColor(160.0f / 255.0f, 215.0f / 255.0f, 245.0f / 255.0f, 1.0f);

}

void Resize(int width, int height) {

	//code
	if (height <= 0)
		height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

}

void Background(void)
{
	// This Square for Sky
	glBegin(GL_QUADS);
	glColor3f(0.600f, 0.800f, 1.000f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glColor3f(0.600f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glColor3f(0.600f, 1.0f, 1.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glColor3f(0.600f, 0.800f, 1.000f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glEnd();


	// This Square for Ground
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.251f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glEnd();


	// Road
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.08f, -1.0f, 0.0f);
	glVertex3f(0.175f, -0.45f, 0.0f);
	glVertex3f(0.35f, -0.45f, 0.0f);
	glVertex3f(0.47f, -1.0f, 0.0f);
	glEnd();

	// For First Road White Vertical line
	glLineWidth(5.0f);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.250f, -0.1f, 0.0f);
	glVertex3f(0.250f, -0.15f, 0.0f);

	// Second White line
	glVertex3f(0.255f, -0.25f, 0.0f);
	glVertex3f(0.255f, -0.35f, 0.0f);

	// Third White line
	glVertex3f(0.260f, -0.45f, 0.0f);
	glVertex3f(0.260f, -0.55f, 0.0f);

	// Fourth White line
	glVertex3f(0.265f, -0.65f, 0.0f);
	glVertex3f(0.265f, -0.75f, 0.0f);

	// Fifth White line
	glVertex3f(0.273f, -0.85f, 0.0f);
	glVertex3f(0.275f, -0.95f, 0.0f);
	glEnd();

}

void Mountain(void)
{
	glBegin(GL_TRIANGLES);
	glColor3f(0.0667f, 0.3490f, 0.0627f);
	glVertex3f(-0.3f, 0.7f, 0.0f);
	glVertex3f(-0.9f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.3f, 0.7f, 0.0f);
	glVertex3f(-0.39f, 0.6f, 0.0f);
	glVertex3f(-0.23f, 0.6f, 0.0f);
	glEnd();
}

void Sun(void)
{
	glBegin(GL_TRIANGLE_FAN);

	glColor3f(1.0f, 1.0f, 0.0f);

	for (float angle = 0.0f; angle < 360.0f; angle += 1.0f)
	{
		float rad = angle * 3.14159f / 180.0f;

		float x = 0.11f * cos(rad) + 0.10f;
		float y = 0.11f * sin(rad) + 0.745f;

		glVertex2f(x, y);
	}

	glEnd();

}

void Cloud(void)
{
	glBegin(GL_TRIANGLE_FAN);

	glColor3f(0.9f, 0.9f, 0.9);

	for (float angle = 0.0f; angle < 360.0f; angle += 1.0f)
	{
		float rad = angle * 3.14159f / 180.0f;

		float x = 0.11f * cos(rad) - 1.4f;
		float y = 0.05f * sin(rad) + 0.85f;

		glVertex2f(x, y);
	}

	glEnd();
}

void LightPole(void)
{

	// pole
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex3f(-0.1f, 0.00f, 0.0f);
	glVertex3f(-0.1f, -0.28f, 0.0f);
	glVertex3f(-0.05f, -0.28f, 0.0f);
	glVertex3f(-0.05f, 0.00f, 0.0f);
	glEnd();

	// Lamp
	glColor3f(1.0f, 1.0f, 1.0f); 	// Lamp color
	glBegin(GL_TRIANGLE_FAN);

	for (float angle = 0.0f; angle <= 360.0f; angle += 5.0f)
	{
		float rad = angle * 3.14159f / 180.0f;
		float x = 0.05f * cos(rad) - 0.07;
		float y = 0.05f * sin(rad) + 0.052f;
		glVertex2f(x, y);
	}
	glEnd();
}

void drawIucaaBuilding(void)
{
	glPushMatrix();

	//main building body
	glColor3f(215.0f / 255.0f, 205.0f / 255.0f, 190.0f / 255.0f);
	glRectd(-0.40f, -0.85f, 0.40f, -0.15f);

	//top floor
	glColor3f(195.0f / 255.0f, 185.0f / 255.0f, 170.0f / 255.0f);
	glRectd(-0.30f, -0.15f, 0.30f, 0.05f);

	//entrance door
	glColor3f(100.0f / 255.0f, 70.0f / 255.0f, 45.0f / 255.0f);
	glRectd(-0.08f, -0.85f, 0.08f, -0.55f);

	//windows 
	glColor3f(175.0f / 255.0f, 165.0f / 255.0f, 150.0f / 255.0f);
	glRectd(-0.30f, -0.65f, -0.18f, -0.45f);
	glRectd(0.18f, -0.65f, 0.30f, -0.45f);
	glRectd(-0.30f, -0.40f, -0.18f, -0.22f);
	glRectd(0.18f, -0.40f, 0.30f, -0.22f);

	glColor3f(165.0f / 255.0f, 165.0f / 255.0f, 170.0f / 255.0f);
	glRectd(-0.29f, -0.64f, -0.19f, -0.46f);
	glRectd(0.19f, -0.64f, 0.29f, -0.46f);
	glRectd(-0.29f, -0.39f, -0.19f, -0.23f);
	glRectd(0.19f, -0.39f, 0.29f, -0.23f);

	//telescope on building top
	glPushMatrix();
	glTranslatef(0.0f, 0.05f, 0.0f);

	//tripod legs
	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(-0.102f, 0.0f, -0.088f, 0.30f);
	glRectd(0.088f, 0.0f, 0.102f, 0.30f);
	glRectd(-0.10f, 0.28f, 0.10f, 0.30f);

	//main pole
	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(-0.008f, 0.0f, 0.008f, 0.34f);

	//dish outer rim
	glPushMatrix();
	glTranslatef(0.0f, 0.38f, 0.0f);

	glColor3f(100.0f / 255.0f, 135.0f / 255.0f, 170.0f / 255.0f);
	glutSolidSphere(0.12, 14, 10);

	//dish inner surface
	glColor3f(213.0f / 255.0f, 220.0f / 255.0f, 226.0f / 255.0f);
	glutSolidSphere(0.08, 12, 10);

	//box at dish center
	glColor3f(51.0f / 255.0f, 51.0f / 255.0f, 0.0f / 255.0f);
	glRectd(-0.02f, -0.02f, 0.02f, 0.02f);

	glPopMatrix();

	//signal antenna 
	glColor3f(194.0f / 255.0f, 194.0f / 255.0f, 194.0f / 255.0f);
	glRectd(-0.006f, 0.40f, 0.006f, 0.50f);

	//signal antenna tip
	glPushMatrix();
	glTranslatef(0.0f, 0.52f, 0.0f);

	glColor3f(232.0f / 255.0f, 232.0f / 255.0f, 125.0f / 255.0f);
	glutSolidSphere(0.02, 8, 8);

	glPopMatrix();

	glPopMatrix();

	//IUCAA name plate
	glColor3f(232.0f / 255.0f, 232.0f / 255.0f, 125.0f / 255.0f);
	glRectd(-0.18f, -0.12f, 0.18f, -0.02f);

	glPopMatrix();
	
}

void Display(void) {

	//code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	//Background
	Background();

	//Mountain
	Mountain();

	glTranslatef(0.75f, 0.0f, 0.0f);
	Mountain();

	//Sun
	Sun();

	//For Left side cloud
	Cloud();

	glTranslatef(-0.18f, 0.0f, 0.0f);
	Cloud();

	glTranslatef(0.09f, -0.07f, 0.0f);
	Cloud();

	//for Right side cloud
	glTranslatef(0.7f, 0.07f, 0.0f);
	Cloud();

	glTranslatef(0.16f, 0.0f, 0.0f);
	Cloud();

	glTranslatef(-0.07f, -0.06f, 0.0f);
	Cloud();

	glLoadIdentity();
	glTranslatef(0.26f, 0.4f, 0.0f);
	drawIucaaBuilding();

	//Light Pole
	//Right Side poles
	glTranslatef(0.4f, -1.0f, 0.0f);
	LightPole();

	glTranslatef(-0.08f, 0.3f, 0.0f);
	LightPole();

	//Left Side Poles
	glTranslatef(-0.48f, 0.02f, 0.0f);
	LightPole();

	glTranslatef(-0.08f, -0.3f, 0.0f);
	LightPole();

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

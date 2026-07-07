#include <C:/freeglut/include/GL/freeglut.h> 
#include<math.h>

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

void drawEmoji(int i, float x, float y, float radius) {

	float eyeY = y + radius * 0.25f;
	float leftEyeX = x - radius * 0.35f;
	float rightEyeX = x + radius * 0.35f;

    switch (i)
	{
		case 0:
		{
			//happy - smile line tilts up
			glPointSize(5.0f);
			glBegin(GL_POINTS);
			glVertex2f(leftEyeX, eyeY);
			glVertex2f(rightEyeX, eyeY);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(x - radius * 0.3f, y - radius * 0.25f);
			glVertex2f(x + radius * 0.3f, y - radius * 0.12f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 1:
		{
			//sad - frown line tilts down + tear dot
			glPointSize(5.0f);
			glBegin(GL_POINTS);
			glVertex2f(leftEyeX, eyeY);
			glVertex2f(rightEyeX, eyeY);
			glVertex2f(leftEyeX, eyeY - radius * 0.2f);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(x - radius * 0.3f, y - radius * 0.12f);
			glVertex2f(x + radius * 0.3f, y - radius * 0.28f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 2:
		{
			//neutral - flat mouth
			glPointSize(5.0f);
			glBegin(GL_POINTS);
			glVertex2f(leftEyeX, eyeY);
			glVertex2f(rightEyeX, eyeY);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(x - radius * 0.28f, y - radius * 0.1f);
			glVertex2f(x + radius * 0.28f, y - radius * 0.1f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 3:
		{
			//surprised - big eyes + open mouth
			glPointSize(7.0f);
			glBegin(GL_POINTS);
			glVertex2f(leftEyeX, eyeY);
			glVertex2f(rightEyeX, eyeY);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(x, y - radius * 0.38f);
			glVertex2f(x, y - radius * 0.08f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 4:
		{
			//angry - angled brows + frown
			glPointSize(5.0f);
			glBegin(GL_POINTS);
			glVertex2f(leftEyeX, eyeY);
			glVertex2f(rightEyeX, eyeY);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(x - radius * 0.45f, y + radius * 0.38f);
			glVertex2f(x - radius * 0.2f, y + radius * 0.32f);
			glVertex2f(x + radius * 0.2f, y + radius * 0.32f);
			glVertex2f(x + radius * 0.45f, y + radius * 0.38f);
			glVertex2f(x - radius * 0.3f, y - radius * 0.12f);
			glVertex2f(x + radius * 0.3f, y - radius * 0.28f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 5:
		{
			//wink - closed left eye + open right eye + smile
			glPointSize(5.0f);
			glBegin(GL_POINTS);
			glVertex2f(rightEyeX, eyeY);
			glEnd();
			glBegin(GL_LINES);
			glVertex2f(leftEyeX - radius * 0.1f, eyeY);
			glVertex2f(leftEyeX + radius * 0.1f, eyeY);
			glVertex2f(x - radius * 0.3f, y - radius * 0.25f);
			glVertex2f(x + radius * 0.3f, y - radius * 0.12f);
			glEnd();
			glPointSize(1.0f);
			break;
		}
		case 6:
		{
			//sleepy - closed eyes + droopy mouth
			glBegin(GL_LINES);
			glVertex2f(leftEyeX - radius * 0.1f, eyeY);
			glVertex2f(leftEyeX + radius * 0.1f, eyeY);
			glVertex2f(rightEyeX - radius * 0.1f, eyeY);
			glVertex2f(rightEyeX + radius * 0.1f, eyeY);
			glVertex2f(x - radius * 0.2f, y - radius * 0.18f);
			glVertex2f(x + radius * 0.2f, y - radius * 0.22f);
			glEnd();
			break;
		}
		case 7:
		{
			//dead - X eyes + tongue line
			glBegin(GL_LINES);
			glVertex2f(leftEyeX - radius * 0.1f, eyeY + radius * 0.1f);
			glVertex2f(leftEyeX + radius * 0.1f, eyeY - radius * 0.1f);
			glVertex2f(leftEyeX + radius * 0.1f, eyeY + radius * 0.1f);
			glVertex2f(leftEyeX - radius * 0.1f, eyeY - radius * 0.1f);
			glVertex2f(rightEyeX - radius * 0.1f, eyeY + radius * 0.1f);
			glVertex2f(rightEyeX + radius * 0.1f, eyeY - radius * 0.1f);
			glVertex2f(rightEyeX + radius * 0.1f, eyeY + radius * 0.1f);
			glVertex2f(rightEyeX - radius * 0.1f, eyeY - radius * 0.1f);
			glVertex2f(x, y - radius * 0.28f);
			glVertex2f(x, y - radius * 0.12f);
			glEnd();
			break;
		}
		default:
			break;
		   	
    }

}

void Display(void) {
    
	//code 
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); 

	int i = 0;
	float centerX[8] = { -0.6f, -0.2f, 0.2f, 0.6f, -0.6f, -0.2f, 0.2f, 0.6f };
	float centerY[8] = { 0.4f, 0.4f, 0.4f, 0.4f, -0.4f, -0.4f, -0.4f, -0.4f };
	float radius = 0.12f;

	while (i < 8)
	{
		glBegin(GL_LINE_LOOP);
		
		float cx = centerX[i];
    	float cy = centerY[i];
		
		for(float angle = 0.0f; angle < 360.0f; angle += 1.0f)
		{
			float rad = angle * 3.14159f / 180.0f;

			float x = cx + radius * cos(rad);
			float y = cy + radius * sin(rad);

			glVertex2f(x, y);
		}

		glEnd();

		drawEmoji(i, centerX[i], centerY[i], radius);
		i++;
	}

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

#include <GL/freeglut.h>

void display(void) {
	float light_pos[4] = {0., 10., 10., 1.0};
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	
	glLookAt(0,0,12,0,0,0,0,1,0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
	
	glColor3f(0.0, 1.0, 1.0);
	glutSolidTeapot(1.0);
	glFlush();
}

void initialize(void) {
	glClearColor(1.0f, 1.0f, 1.0f 1.0f);
	
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_DEPTH_TEST);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, 1.0, 10.0, 1000.0);
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH);
	glutInitWindeoSize(600, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Teapot");
	intitialize();
	glutDosplayFunc(display);
	glutMainLoop();
	
	return 0;
}

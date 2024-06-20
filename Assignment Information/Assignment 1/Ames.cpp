#include <GL/freeglut.h>


float angle = 30.0;  //Rotation angle for viewing

void AAO1()
{
    glBegin(GL_QUADS); // Q1
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-10, 0, 0); // bottom-left vertex
       glVertex3f(-10, 88.5, 0); // top-left vertex
       glVertex3f(0, 88.5, 0); // top-right vertex
       glVertex3f(0, 3, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q1 end

    glBegin(GL_QUADS); // Q2
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-19, 1.8, 0); // bottom-left vertex
       glVertex3f(-19, 87, 0); // top-left vertex
       glVertex3f(-10, 88.5, 0); // top-right vertex
       glVertex3f(-10, 0, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q2 end

    glBegin(GL_QUADS); // Q3
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-134, 22, 0); // bottom-left vertex
       glVertex3f(-134, 22, 0); // top-left vertex
       glVertex3f(-19, 10.5, 0); // top-right vertex
       glVertex3f(-19, 1.8, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q3 end

    glBegin(GL_QUADS); // Q4
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-134, 61.5, 0); // bottom-left vertex
       glVertex3f(-134, 66, 0); // top-left vertex
       glVertex3f(-19, 87, 0); // top-right vertex
       glVertex3f(-19, 77.7, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q4 end

    glBegin(GL_QUADS); // Q5
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-134, 26.5, 0); // bottom-left vertex
       glVertex3f(-134, 61.5, 0); // top-left vertex
       glVertex3f(-129, 62.2, 0); // top-right vertex
       glVertex3f(-129, 25.80, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q5 end

    glBegin(GL_QUADS); // Q6
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-129, 42, 0); // bottom-left vertex
       glVertex3f(-129, 46, 0); // top-left vertex
       glVertex3f(-19, 48, 0); // top-right vertex
       glVertex3f(-19, 40, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q6 end

    glBegin(GL_QUADS); // Q7
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-103, 22.2, 0); // bottom-left vertex
       glVertex3f(-103, 41.52, 0); // top-left vertex
       glVertex3f(-97.5, 41.42, 0); // top-right vertex
       glVertex3f(-97.5, 21.43, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q7 end

    glBegin(GL_QUADS); // Q8
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-103, 46.47, 0); // bottom-left vertex
       glVertex3f(-103, 65.87, 0); // top-left vertex
       glVertex3f(-97.5, 66.64, 0); // top-right vertex
       glVertex3f(-97.5, 46.57, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q8 end

    glBegin(GL_QUADS); // Q9
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-65, 47.16, 0); // bottom-left vertex
       glVertex3f(-65, 71.2, 0); // top-left vertex
       glVertex3f(-58.6, 72.1, 0); // top-right vertex
       glVertex3f(-58.5, 47.3, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q9 end

    glBegin(GL_QUADS); // Q10
       glPushMatrix();
       glColor3f(1.0, 0.0, 1.0);
       glVertex3f(-65, 16.9, 0); // bottom-left vertex
       glVertex3f(-65.2, 40.84, 0); // top-left vertex
       glVertex3f(-58.6, 40.72, 0); // top-right vertex
       glVertex3f(-58.6, 16, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q10 end

    glBegin(GL_QUADS); // Q11
       glPushMatrix();
       glColor3f(0.0, 1.0, 0.0);
       glVertex3f(-58.6, 16, 0); // bottom-left vertex
       glVertex3f(-58.6, 40.7, 0); // top-left vertex
       glVertex3f(-51, 40.58, 0); // top-right vertex
       glVertex3f(-51, 18.5, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q11 end

    glBegin(GL_QUADS); // Q12
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-97.5, 21.43, 0); // bottom-left vertex
       glVertex3f(-97.5, 41.4, 0); // top-left vertex
       glVertex3f(-91, 41.3, 0); // top-right vertex
       glVertex3f(-91, 24, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q12 end

    glBegin(GL_QUADS); // Q13
       glPushMatrix();
       glColor3f(0.0, 1.0, 0.0);
       glVertex3f(-129, 25.8, 0); // bottom-left vertex
       glVertex3f(-129, 42, 0); // top-left vertex
       glVertex3f(-124, 41.9, 0); // top-right vertex
       glVertex3f(-124, 27.8, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q13 end

    glBegin(GL_QUADS); // Q14
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-129, 46, 0); // bottom-left vertex
       glVertex3f(-129, 62.2, 0); // top-left vertex
       glVertex3f(-124, 60.5, 0); // top-right vertex
       glVertex3f(-124, 46.1, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q14 end
    
    glBegin(GL_QUADS); // Q15
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-97.5, 46.6, 0); // bottom-left vertex
       glVertex3f(-97.5, 66.6, 0); // top-left vertex
       glVertex3f(-91.5, 64, 0); // top-right vertex
       glVertex3f(-91.5, 46.7, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q15 end
    
    glBegin(GL_QUADS); // Q16
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-58.6, 47.3, 0); // bottom-left vertex
       glVertex3f(-58.6, 72.1, 0); // top-left vertex
       glVertex3f(-51, 69, 0); // top-right vertex
       glVertex3f(-51, 47.45, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q16 end
    
    glBegin(GL_QUADS); // Q17
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-51, 69, 0); // bottom-left vertex
       glVertex3f(-58.6, 72.1, 0); // top-left vertex
       glVertex3f(-19, 77.65, 0); // top-right vertex
       glVertex3f(-19, 72.8, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q17 end
    
    glBegin(GL_QUADS); // Q18
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-58.5, 16, 0); // bottom-left vertex
       glVertex3f(-51, 18.5, 0); // top-left vertex
       glVertex3f(-19, 15, 0); // top-right vertex
       glVertex3f(-19, 10.5, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q18 end
    
    glBegin(GL_QUADS); // Q19
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-97.5, 21.43, 0); // bottom-left vertex
       glVertex3f(-91, 24, 0); // top-left vertex
       glVertex3f(-65, 21, 0); // top-right vertex
       glVertex3f(-65, 16.9, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q19 end
   
    glBegin(GL_QUADS); // Q20
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-91.5, 64, 0); // bottom-left vertex
       glVertex3f(-97.5, 66.65, 0); // top-left vertex
       glVertex3f(-65, 71.2, 0); // top-right vertex
       glVertex3f(-65, 67.5, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q20 end
    
    glBegin(GL_QUADS); // Q21
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-124, 60.5, 0); // bottom-left vertex
       glVertex3f(-129, 62.2, 0); // top-left vertex
       glVertex3f(-103, 65.86, 0); // top-right vertex
       glVertex3f(-103, 63, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q21 end
    
    glBegin(GL_QUADS); // Q22
       glPushMatrix();
       glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-129, 25.8, 0); // bottom-left vertex
       glVertex3f(-124, 27.8, 0); // top-left vertex
       glVertex3f(-103, 25, 0); // top-right vertex
       glVertex3f(-103, 22.2, 0); // bottom-right vertex
       glPopMatrix();
    glEnd(); // Q22 end
}


void drawFloor()
{
    bool flag = false;

    glBegin(GL_QUADS);
    glNormal3f(0, 0, 1);
    for(int x = -400; x <= 400; x += 20)
    {
        for(int z = -400; z <= 400; z += 20)
        {
            if(flag) glColor3f(0.6, 1.0, 0.8);
            else glColor3f(1.0, 1.0, 1.0);
            glVertex3f(x, 0, z);
            glVertex3f(x, 0, z+20);
            glVertex3f(x+20, 0, z+20);
            glVertex3f(x+20, 0, z);
            flag = !flag;
        }
    }
    glEnd();
}

void drawWall()
{

    glBegin(GL_QUADS);
       glPushMatrix();
       glColor3f(1.0, 1.0, 1.0);
       glVertex3f(-400.0f, 0.0f, -400.0f); // bottom-left vertex
       glVertex3f(-400.0f, 400.0f, -400.0f); // top-left vertex
       glVertex3f(400.0f, 400.0f, -400.0); // top-right vertex
       glVertex3f(400.0f, 0.0f, -400.0); // bottom-right vertex
       glPopMatrix();
    glEnd();


    glBegin(GL_QUADS);
       glPushMatrix();
       glColor3f(1.0, 1.0, 1.0);
       glVertex3f(400.0f, 400.0f, 400.0f); // bottom-left vertex
       glVertex3f(400.0f, 0.0f, 400.0f); // top-left vertex
       glVertex3f(-400.0f, 0.0f, 400.0); // top-right vertex
       glVertex3f(-400.0f, 400.0f, 400.0); // bottom-right vertex
       glPopMatrix();
    glEnd();

    glBegin(GL_QUADS);
       glPushMatrix();
       glColor3f(1.0, 1.0, 1.0);
       glVertex3f(400.0f, 0.0f, 400.0f); // bottom-left vertex
       glVertex3f(400.0f, 400.0f, 400.0f); // top-left vertex
       glVertex3f(400.0f, 400.0f, -400.0); // top-right vertex
       glVertex3f(400.0f, 0.0f, -400.0); // bottom-right vertex
       glPopMatrix();
    glEnd();

    glBegin(GL_QUADS);
       glPushMatrix();
       glColor3f(1.0, 1.0, 1.0);
       glVertex3f(-400.0f, 0.0f, -400.0f); // bottom-left vertex
       glVertex3f(-400.0f, 400.0f, -400.0f); // top-left vertex
       glVertex3f(-400.0f, 400.0f, 400.0); // top-right vertex
       glVertex3f(-400.0f, 0.0f, 400.0); // bottom-right vertex
       glPopMatrix();
    glEnd();


}

void display()
{
    float lpos[4] = {100., 100., 100., 1.0};  //light's position

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(400, 100, 0, 0, 0, 0, 0, 1, 0); // need to change thsi to move around
    glLightfv(GL_LIGHT0, GL_POSITION, lpos);   //set light position

    glRotatef(angle, 0.0, 1.0, 0.0);

    drawFloor();
    drawWall();

    AAO1();


    glFlush();
}


void initialize()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);   //Background colour

    glEnable(GL_LIGHTING);                  //Enable OpenGL states
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 50, 1000);  //The camera view volume
}

void special(int key, int x, int y) // need to implment
{
    if(key == GLUT_KEY_LEFT) angle--;
    else if(key == GLUT_KEY_RIGHT) angle++;
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_DEPTH);
   glutInitWindowSize (800, 800);
   glutInitWindowPosition (10, 10);
   glutCreateWindow ("ames window");
   initialize();

   glutDisplayFunc(display);
   glutSpecialFunc(special);
   glutMainLoop();
   return 0;
}

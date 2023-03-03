#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

//sky

    glBegin(GL_QUADS);
    glColor3f(0.529f, 0.808f, 0.922f);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.2);
    glVertex2f(1.0, 0.5);
    glVertex2f(1.0, 1.0);
    glVertex2f(1.0, 1.0);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.529f, 0.808f, 0.922f);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.0, 1.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(1.0, 1.0);

    glEnd();


//ground

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.3f, 0.1f);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.2);
    glVertex2f(1.0, 0.5);
    glVertex2f(1.0, 0.0);
    glEnd();



    // font
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.2, 0.5);
    glEnd();

    // side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.15, 0.22);
    glVertex2f(0.15, 0.53);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.2, 0.2);
    glEnd();

//TOP BASE


    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex2f(0.17, 0.53);
    glVertex2f(0.37, 0.53);
    glVertex2f(0.39, 0.51);
    glVertex2f(0.2, 0.51);
    glEnd();

    // door
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.33, 0.2);
    glVertex2f(0.33, 0.25);
    glVertex2f(0.3, 0.25);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.36, 0.23);
    glVertex2f(0.38, 0.23);
    glVertex2f(0.38, 0.25);
    glVertex2f(0.36, 0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.36, 0.28);
    glVertex2f(0.38, 0.28);
    glVertex2f(0.38, 0.3);
    glVertex2f(0.36, 0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.36, 0.33);
    glVertex2f(0.38, 0.33);
    glVertex2f(0.38, 0.35);
    glVertex2f(0.36, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.36, 0.38);
    glVertex2f(0.38, 0.38);
    glVertex2f(0.38, 0.4);
    glVertex2f(0.36, 0.4);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.36, 0.43);
    glVertex2f(0.38, 0.43);
    glVertex2f(0.38, 0.45);
    glVertex2f(0.36, 0.45);
    glEnd();





    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.29, 0.28);
    glVertex2f(0.31, 0.28);
    glVertex2f(0.31, 0.3);
    glVertex2f(0.29, 0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.29, 0.33);
    glVertex2f(0.31, 0.33);
    glVertex2f(0.31, 0.35);
    glVertex2f(0.29, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.29, 0.38);
    glVertex2f(0.31, 0.38);
    glVertex2f(0.31, 0.4);
    glVertex2f(0.29, 0.4);
    glEnd();






    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.22, 0.23);
    glVertex2f(0.24, 0.23);
    glVertex2f(0.24, 0.25);
    glVertex2f(0.22, 0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.22, 0.28);
    glVertex2f(0.24, 0.28);
    glVertex2f(0.24, 0.3);
    glVertex2f(0.22, 0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.22, 0.33);
    glVertex2f(0.24, 0.33);
    glVertex2f(0.24, 0.35);
    glVertex2f(0.22, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.22, 0.38);
    glVertex2f(0.24, 0.38);
    glVertex2f(0.24, 0.4);
    glVertex2f(0.22, 0.4);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.22, 0.43);
    glVertex2f(0.24, 0.43);
    glVertex2f(0.24, 0.45);
    glVertex2f(0.22, 0.45);
    glEnd();



//roop

    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4);
    glVertex2f(0.36, 0.53);
    glVertex2f(0.37, 0.54);
    glVertex2f(0.4, 0.51);
    glVertex2f(0.39, 0.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.6, 0.1, 0.7);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.4, 0.51);
    glVertex2f(0.2, 0.51);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.6, 0.1, 0.7);
    glVertex2f(0.15, 0.53);
    glVertex2f(0.36, 0.53);
    glVertex2f(0.37, 0.54);
    glVertex2f(0.15, 0.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3, 0.1, 0.4);
    glVertex2f(0.15, 0.53);
    glVertex2f(0.15, 0.54);
    glVertex2f(0.2, 0.51);
    glVertex2f(0.2, 0.5);
    glEnd();




//tree
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex2f(0.44, 0.20);
    glVertex2f(0.465, 0.20);
    glVertex2f(0.465, 0.3);
    glVertex2f(0.44, 0.3);
    glEnd();

    //leap

    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.4, 0.);
    glVertex2f(0.38, 0.28);
    glVertex2f(0.52, 0.28);
    glVertex2f(0.45, 0.36);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.5, 0.);
    glVertex2f(0.38, 0.3);
    glVertex2f(0.52, 0.3);
    glVertex2f(0.45, 0.38);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.6, 0.);
    glVertex2f(0.38, 0.32);
    glVertex2f(0.52, 0.32);
    glVertex2f(0.45, 0.39);
    glEnd();




//ambulance base
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.1, 0.7);
    glVertex2f(0.45, 0.20);
    glVertex2f(0.62, 0.2);
    glVertex2f(0.62, 0.22);
    glVertex2f(0.45, 0.22);
    glEnd();


//wheel back

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.465, 0.185);
    glVertex2f(0.495, 0.185);
    glVertex2f(0.495, 0.215);
    glVertex2f(0.465, 0.215);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.555, 0.185);
    glVertex2f(0.585, 0.185);
    glVertex2f(0.585, 0.215);
    glVertex2f(0.555, 0.215);
    glEnd();

    //wheel
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2f(0.47, 0.21);
    glVertex2f(0.489, 0.21);
    glVertex2f(0.489, 0.19);
    glVertex2f(0.47, 0.19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2f(0.56, 0.21);
    glVertex2f(0.579, 0.21);
    glVertex2f(0.579, 0.19);
    glVertex2f(0.56, 0.19);
    glEnd();


//ambulance box
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.4, 0.4);
    glVertex2f(0.46, 0.22);
    glVertex2f(0.56, 0.22);
    glVertex2f(0.56, 0.27);
    glVertex2f(0.46, 0.27);
    glEnd();

//ambulance font
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.4, 0);
    glVertex2f(0.56, 0.22);
    glVertex2f(0.61, 0.22);
    glVertex2f(0.61, 0.26);
    glVertex2f(0.56, 0.26);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 0);
    glVertex2f(0.61, 0.24);
    glVertex2f(0.61, 0.26);
    glVertex2f(0.59, 0.26);
    glEnd();


//AMBULANCE WINDOW
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.4, 0);
    glVertex2f(0.565, 0.225);
    glVertex2f(0.6, 0.225);
    glVertex2f(0.59, 0.25);
    glVertex2f(0.565, 0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0.4, 0);
    glVertex2f(0.51, 0.23);
    glVertex2f(0.55, 0.23);
    glVertex2f(0.55, 0.26);
    glVertex2f(0.51, 0.26);
    glEnd();

//logo
    glBegin(GL_QUADS);
    glColor3f(0.7, 0, 0);
    glVertex2f(0.48, 0.26);
    glVertex2f(0.49, 0.26);
    glVertex2f(0.49, 0.23);
    glVertex2f(0.48, 0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0, 0);
    glVertex2f(0.47, 0.25);
    glVertex2f(0.50, 0.25);
    glVertex2f(0.50, 0.24);
    glVertex2f(0.47, 0.24);
    glEnd();

    //hospital logo

    glBegin(GL_QUADS);
    glColor3f(0.7, 0, 0);
    glVertex2f(0.29, 0.49);
    glVertex2f(0.31, 0.49);
    glVertex2f(0.31, 0.43);
    glVertex2f(0.29, 0.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0, 0);
    glVertex2f(0.27, 0.47);
    glVertex2f(0.33, 0.47);
    glVertex2f(0.33, 0.45);
    glVertex2f(0.27, 0.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.6f);
    glVertex2f(0.65f, 0.09f);
    glVertex2f(0.85f, 0.09f);
    glVertex2f(0.85f, 0.18f);
    glVertex2f(0.65f, 0.18f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex2f(0.65f, 0.18f);
    glVertex2f(0.67f, 0.20f);
    glVertex2f(0.87f, 0.20f);
    glVertex2f(0.85f, 0.18f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.5f);
    glVertex2f(0.85f, 0.18f);
    glVertex2f(0.87f, 0.20f);
    glVertex2f(0.87f, 0.09f);
    glVertex2f(0.85f, 0.09f);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f, 0.5f);
    glVertex2f(0.62f, 0.09f);
    glVertex2f(0.89f, 0.09f);
    glVertex2f(0.89f, 0.08f);
    glVertex2f(0.62f, 0.08f);


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f, 0.5f);
    glVertex2f(0.72f, 0.09f);
    glVertex2f(0.76f, 0.09f);
    glVertex2f(0.76f, 0.15f);
    glVertex2f(0.72f, 0.15f);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f, 0.5f);
    glVertex2f(0.79f, 0.14f);
    glVertex2f(0.82f, 0.14f);
    glVertex2f(0.82f, 0.10f);
    glVertex2f(0.79f, 0.10f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647, 0.447, 0.251);
    glVertex2f(0.89f, 0.08f);
    glVertex2f(0.95f, 0.08f);
    glVertex2f(0.95f, 0.09f);
    glVertex2f(0.88f, 0.09f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647, 0.447, 0.251);
    glVertex2f(0.91f, 0.09f);
    glVertex2f(0.93f, 0.09f);
    glVertex2f(0.93f, 0.26f);
    glVertex2f(0.91f, 0.26f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.4, 0.);
    glVertex2f(0.85, 0.25);
    glVertex2f(0.99, 0.25);
    glVertex2f(0.92, 0.36);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.5, 0.);
    glVertex2f(0.85, 0.27);
    glVertex2f(0.99, 0.27);
    glVertex2f(0.92, 0.38);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0., 0.6, 0.);
    glVertex2f(0.85, 0.29);
    glVertex2f(0.99, 0.29);
    glVertex2f(0.92, 0.39);
    glEnd();


    glutSwapBuffers();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("NIROB-3179");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

// id:201-15-3179, Name: Md Asraful Sharker Nirob, sec:PC-C

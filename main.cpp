#include <GL/glut.h>

void display(void)
{
    //clears the window before drawing
    glClear(GL_COLOR_BUFFER_BIT);

    //resets matrix transformations and coordinate system
    glLoadIdentity();

    //draw a polygon
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 1.0);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.5, 0.0);
    glEnd();

    //displays the frame buffer on the screen
    glFlush();
}

void init()
{
    //sets the clear color for the screen
    glClearColor(0.25, 0.5, 0.75, 1.0);
}

int main(int argc, char** argv)
{
    //initializes the GLUT environment using command line arguments (if any)
    glutInit(&argc, argv);

    //initialize the display mode
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    //set up window position on the screen and window size (in pixels)
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);

    //creates the window with the given title
    //and at the above position and size
    glutCreateWindow("OpenGL_Starter");

    //utiilizes the provided display function;
    //the function must take no arguments and return nothing
    glutDisplayFunc(display);
    init(); //sets up background color

    //runs continuously to hold the program running
    glutMainLoop();

    //terminate program by returning 1
    return 0;
}

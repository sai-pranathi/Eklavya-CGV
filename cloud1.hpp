void cloud()
{
o+=0.2;
if(o<700)
{
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(50+o,600);
glVertex2f(55+o,610);
glVertex2f(65+o,620);
glVertex2f(80+o,620);
glVertex2f(85+o,610);
glVertex2f(95+o,600);
glVertex2f(50+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(90+o,600);
glVertex2f(95+o,610);
glVertex2f(105+o,620);
glVertex2f(120+o,620);
glVertex2f(125+o,610);
glVertex2f(135+o,600);
glVertex2f(90+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(50+400+o,600);
glVertex2f(55+400+o,610);
glVertex2f(65+400+o,620);
glVertex2f(80+400+o,620);
glVertex2f(85+400+o,610);
glVertex2f(95+400+o,600);
glVertex2f(50+400+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(90+400+o,600);
glVertex2f(95+400+o,610);
glVertex2f(105+400+o,620);
glVertex2f(120+400+o,620);
glVertex2f(125+400+o,610);
glVertex2f(135+400+o,600);
glVertex2f(90+400+o,600);
glEnd();
}
else
{
o=0.0;
}
glutPostRedisplay();
}

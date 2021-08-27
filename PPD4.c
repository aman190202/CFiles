//@Objective: Implement a Sample code for function like macros
#include<stdio.h>
#include<stdlib.h>
#define sin(p,b,h)  printf("%.2f %.2f",p/h,b/h);
int main()
{   
    system("cls");
    printf("ENTER THREE SIDES OF THE TRIANGLE ");
    float p,b,h;
    scanf("%f %f %f",&p,&b,&h);
    printf("SIN  and COS values of the triangles are : ");
    sin(p,b,h)
    return 0;
}
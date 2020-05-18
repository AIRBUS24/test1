#include <stdio.h>
#include <stdlib.h> //standard library

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);// Note change of %d to %f
    // Complete the y = line below
    //y = 2*x+3*5;

    //Task 10,1:y = 9x + 32(test case:x=1,y=41)
    //y=9x+32;

    //Task 10,2:y=x/(1-x)(test case:x=2,y=-2)
    //y=x/(1-x);

    //Task 10,3:y=x*x+2*x(test case:x=1,y=3)
    //y=x*x+2*x;

    //Task 10,4:y=(x+2)/(x-1)(test case:x=1,y=3)
    //y=(x+2)/(x-1);
    printf("y=%f\n", y);
    return 0;
}

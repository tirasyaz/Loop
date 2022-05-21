//Documentation section
/* Created by tira(10/5/2022)- To find factorial of a number */

//Pre-processor section
#include<stdio.h>

//Global variable section

//Main function section
int main()
{
    int num, i , fact = 1;

    printf("Enter a number to find its factorial:");
    scanf("%d" , &num);

    for(i=1 ; i<= num ; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d" , num, fact);

    return 0;
}
//User defined section

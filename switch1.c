#include<stdio.h>
int main()
{
    int num;
    float a,b,c;
    printf("-------------WELCOME TO CALCULATION SYSTEM ------------- \n\n\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    printf("Enter the operation you have to perform: ");
    scanf("%d",&num);

    printf("Enter first number : ");
    scanf("%f",&a);

    printf("Enter second number : ");
    scanf("%f",&b);

    switch(num)
    {
        case 1:
        c=a+b;
        printf("Addition of %.2f and %.2f is %.2f\n",a,b,c);
        break;

        case 2:
        c=a-b;
        printf("substraction of %.2f and %.2f is %.2f\n",c);
        break;

        case 3:
        c=a*b;
        printf("Multiplication of %.2f and %.2f is %.2f\n",c);
        break;

        case 4:
        c=a/b;
        printf("Division of %.2f and %.2f is %.2f\n ",c);
        break;

        default:
        printf("\nEnter correct Choice !! ");
        
    }
    printf("        THANK YOU FOR USING THIS CALCULATION STSTEM         ");
}
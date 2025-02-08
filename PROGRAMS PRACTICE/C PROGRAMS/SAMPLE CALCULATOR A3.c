#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c;
    int j;
    printf("Calculator\n");
    printf("Enter 1 to convert for Addition, 2 to convert for Subtraction, 3 for Multiplication, 4 for Division, 5 for Logarithmic values & 6 for Square Roots\n");
    scanf("%d",&j);
    switch(j)
    {
        case 1: 
        printf("Enter two numbers\n");
        scanf("%f %f",&a,&b);
        c=a+b;
        printf("Sum=%f",c);
        break;
        case 2: 
        printf("Enter two numbers\n");
        scanf("%f %f",&a,&b);
        c-a-b;
        printf("Diffrence=%f",c);
        break;
        case 3: 
        printf("Enter two numbers\n");
        scanf("%f %f",&a,&b);
        c=a*b;
        printf("Product=%f",c);
        break;
        case 4:
        printf("Enter two numbers\n");
        scanf("%f %f",&a,&b);
        c=a/b;
        if(a==0 || b==0)
        printf("Division Not Possible\n");
        else
        printf("Quotient=%d",c);
        break;
        case 5:
        printf("Enter a number\n");
        scanf("%f",&a);
        c=log(a);
        printf("Log=%f",c);
        break;
        case 6:
        printf("Enter a number\n");
        scanf("%f",&a);
        c=sqrt(a);
        printf("Square Root=%f",c);
        break;
        default: printf("Invalid input\n");
    }
    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    //ques 1
    int num, x, y, rem, sum;
    printf("Enter a number:\n");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        x=x/10;
        y++;
    }
    while(num!=0)
    {
        rem=x%10;
        sum+=pow(rem,y);
    }
    if(sum==num)
    printf("%d is an Armstromg number.",num);
    else
    printf("%d is nor an Armstrong number.",num);
    return 0;
}

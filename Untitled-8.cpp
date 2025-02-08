#include <iostream>
using namespace std;
int reverse(int a)
{
    int rev=0,rem;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    return rev;
}
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
}
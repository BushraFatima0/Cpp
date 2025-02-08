#include <iostream>
using namespace std;
void palindrome(int a)
{
    int rev=0,rem,temp=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(temp==rev)
    {
        cout<<"It is a Palindrome No.";
    }
    else
    {
        cout<<"It's not a Palindrome No.";
    }
}
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    palindrome(a);
}
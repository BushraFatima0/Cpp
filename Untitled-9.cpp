#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int s,b,a;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    s=sum(a,b);
    cout<<"Sum= "<<s;

}
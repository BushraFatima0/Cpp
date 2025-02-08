#include <iostream>
using namespace std;
int area(int l, int b)
{
    return l*b;
}
int main()
{
    int len,br,area;
    cout<<"Enter L and B"<<endl;
    cin>>len>>br;
    area=len*br;
    cout<<"Area= "<<area;

}
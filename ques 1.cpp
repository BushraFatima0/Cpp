/*
enter a number 3
Prime number
next prime no.= 5
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter a number ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if (count>0)
    {
        cout<<"Composite number"<<endl;
        cout<<"factors: ";
        for(i =1;i<n;i++)
        {
            if(n%i==0)
            {
            cout<<i<<",";
                
            }
        }
    }
    else{
        cout<<"Prime number"<<endl;
        int x=n+1;
        int check=0;
        while(check==0)
        {
            for(i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    x=x+1;
                    check=0;
                    break;
                }
                else
                {
                    check=1;
                }
            if(check==1){
                cout<<"next prime no.= "<<x;
                break;
            }}
            
        }
    return 0;
}}


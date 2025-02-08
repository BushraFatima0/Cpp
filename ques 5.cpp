#include <iostream>
using namespace std;
int main() 
{
    int m[3][3];
    cout << "enter elements" << endl;
    for (int i=0; i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            cin>>m[i][j];
        }
    }

    cout << "matrix: "<<endl;
    for (int i=0;i<3;i++) 
    {
        for (int j =0;j <3;j++) 
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "after rotation: "<< endl;
    for (int i=0;i<3; i++) 
    {
        for (int j=3-1;j>=0;j--) 
        {
            cout << m[j][i] << " ";
        }
        cout<<endl;
    }
    return 0;
}

/*enter elements
3
6
2
5
9
1
8
5
4
matrix: 
3 6 2 
5 9 1 
8 5 4 
after rotation: 
8 5 3 
5 9 6 
4 1 2 
*/

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"enter size: ";
    cin>> n;
    int m[n][n];
    int x = 1;
    int top = 0, bottom = n-1, left = 0, right = n-1;
    while (x <= n*n) 
{
        for (int i = left; i <= right; i++){
            m[top][i] = x++;}
        top++;
        for (int i = top; i <= bottom; i++){
            m[i][right] = x++;}
        right--;
        for (int i = right; i >= left; i--){
            m[bottom][i] = x++;}
        bottom--;
        for (int i = bottom; i >= top; i--){
            m[i][left] = x++;}
        left++;
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

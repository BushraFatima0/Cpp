#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], rev[n];
    int max=arr[0],min=arr[0];
    int secondmax, secondmin;
    int i;

    cout << "enter elements:"<<endl;
    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "array: "<<endl;
    for (i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    for (i = 0; i < n; i++) 
    {
        rev[i] = arr[n-i-1];
    }
    cout << "Reversed array: ";
    for (i = 0; i < n; i++) 
    {
        cout << rev[i] << " ";
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
        else if (arr[i] > secondmax && arr[i] != max) 
        {
            secondmax = arr[i];
        }
        if(arr[i]<min)
        {
            secondmin=min;
            min=arr[i];
        }
        else if (arr[i] < secondmin && arr[i] != min) 
        {
            secondmin = arr[i];
        }
    }
    cout << "Second largest element: " << secondmax << endl;
    cout << "Second smallest element: " << secondmin << endl;
    return 0;

}
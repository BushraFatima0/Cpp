#include <iostream>
using namespace std;

int main() {
    string str, str2;
    cout << "Enter a string: ";
    getline(cin, str);
    int l=str.length();
    for (int i = 0; i < l ; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str2 += str[i]+32;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str2= str2+ str[i];
        }
    }
    cout<<str2<<endl;
    int n = str2.length();
    int check=1;

    for (int i = 0; i < n / 2; i++) {
        if (str2[i] == str2[n - i - 1]) 
        {
            check = 1;
        }
        else
        {
            check=0;
            break;
        }
    }
    if (check==1)
        cout << "It is a palindrome" << endl;
    else
        cout << "It is not a palindrome" << endl;

    return 0;
}

//wap to find a given length of a substring in a string 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    int a,b;

    cout << "Enter the string: ";
    cin >> s1 ;

    cout<<"Enter the starting limit limit: ";
    cin >> a ;

    cout<<"Enter the ending limit limit: ";
    cin >> b ;

    string r = s1.substr(a, b);
    cout<<"The substring is: "<<r<<endl;

    cout<<"The length of the string is: "<<r.size();

    return 0;

}
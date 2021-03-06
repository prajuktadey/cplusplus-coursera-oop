//reverse a string 
#include <iostream>

using namespace std;

int main()
{
    char s1[100], c = 'a';
    int len = 0, i = 0;

    cout << "Enter the String you want to reverse: ";
    cin >> s1;

    while (c != '\0') //\0 is the last character of any string 
    {
        c = s1[i];
        i++;
    }
    len= i - 1;//length of the string

    cout << "\nLength of the entered string: " << len << "\n";

    char s2[i]; //another char array to store the reverse of a string 

    i = 0;
    while (i != len + 1) //while i is not equal to the last character of the input string 
    {
        s2[i] = s1[len - i - 1]; //extracting the characters from the end of the string 
        i++;
    }

    cout << "\nReverse of the entered string " << s1 << " is : " << s2 << "\n";

    return 0;
}

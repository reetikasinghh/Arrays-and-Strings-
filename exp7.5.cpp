// QUES: WAP to check whether the string is palindrome or not.

#include <iostream>
using namespace std;

int main()
{
    string str;
    int i, len;

    // Prompt the user to enter a string
    cout << "Enter a string: ";
    cin >> str;

    len = str.size();

    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    // Check if the original string is equal to the reversed string
    if (str == str)
    {
        cout << "Palindrome" << endl; // If they are equal, it's a palindrome
    }
    else
    {
        cout << "Not a Palindrome" << endl; // If they are not equal, it's not a palindrome
    }

    return 0;
}
/* output 
Enter a string:  symbiosis
Reversed string: sisoibmys
Palindrome 
*/
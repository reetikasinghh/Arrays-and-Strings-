// QUES: WAP to perform String concatenation and reverse 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize two strings
    string str1 = "Symbiosis";
    string str2 = "Technology";

    // Concatenate the two strings and store the result in str3
    string str3 = str1 + str2;

    // Output the concatenated string and its length
    cout << "Concatenated String: " << str3 << endl;
    cout << "Length of string: " << str3.length() << endl;

    // Reverse the string by swapping characters
    int len = str3.length();
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str3[i];
        str3[i] = str3[len - i - 1];
        str3[len - i - 1] = temp;
    }

    // Output the reversed string
    cout << "Reversed String: " << str3 << endl;

    return 0;
}
/* output 
Concatenated String: SymbiosisTechnology
Length of string: 19
Reversed String: ygolonhceTsisoibmyS */



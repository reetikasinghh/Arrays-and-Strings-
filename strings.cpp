// QUES: WAP TO DISPLAY A STRING 
#include<iostream>
using namespace std;

int main()
{
    string name[10]; // Declare an array of strings to store up to 10 strings
    int i;

    cout << "Enter the string to display :";

    for (i = 0; i < 10; i++) { // Loop to input and display strings (up to 10 times)
        cin >> name[i]; // Input a string from the user

        cout << "The given text is: " << name[i] << endl; // Display the entered string

        // Exit the loop
        break;
    }

    return 0;
}

/* output: 
Enter the string to display : symbiosis 
The given text is: symbiosis*/

// QUES: WAP TO DISPLAY THE LENGTH OF THE STRING 
#include<iostream>
using namespace std;

int main()
{
    char str[10] = "Symbiosis";
    int i,length = 0;

    for(i=0; str[i] !='\0'; ++i)
    {
        length++;
    }
    cout<<"Length of string is :"<<length;

    return 0;
}
/*Output
Length of string is :9
*/


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







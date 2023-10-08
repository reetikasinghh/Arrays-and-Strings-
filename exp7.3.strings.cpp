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


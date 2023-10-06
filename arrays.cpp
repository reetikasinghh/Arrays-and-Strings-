//wap to Enter The marks of 10 subjects and display it.
#include<iostream>
using namespace std;
int main()
{
    int marks[10] = {90,74,78,87,86,85,45,12,97,90};
    int i;
    for(int i = 0;i<10;++i)
    cout<<"\nMarks"<<":"<<marks[i];
}
/*Output
Marks:90
Marks:74
Marks:78
Marks:87
Marks:86
Marks:85
Marks:45
Marks:12
Marks:97
Marks:90
*/

//wap to display the marks of each subject using arrays 
#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    int i;
    for(i=0;i<10;i++){
        cout<<"Enter the marks of each subject:"<<endl;
        cin>>marks[i];
    }
    cout<<"\n Entered marks of the given subjects are:\n";
    for(i=0;i<10;i++){
        cout<<"\n marks"<<":"<<marks[i];
    }
} 
/* output 
Enter the marks of each subject:
56
Enter the marks of each subject:
45
Enter the marks of each subject:
78
Enter the marks of each subject:
89
Enter the marks of each subject:
23
Enter the marks of each subject:
98
Enter the marks of each subject:
78
Enter the marks of each subject:
45
Enter the marks of each subject:
98
Enter the marks of each subject:
98

 Entered marks of the given subjects are:

 marks:56
 marks:45
 marks:78
 marks:89
 marks:23
 marks:98
 marks:78
 marks:45
 marks:98
 marks:98*/



#include <iostream>
using namespace std;
int main ()
{
char grade = 'D';
switch(grade)
{
case 'A' :
    cout << "Excellent!" << endl;
    break;
case 'B' :
case 'C' :
    cout << "Well done" << endl;
    break;
case 'D' :
    cout << "You passed" << endl;
case 'F' :
    cout << "Better try again" << endl;
default :
    cout << "Invalid grade" << endl;
}

cout << "Your grade is " << grade << endl;
return 0;
}

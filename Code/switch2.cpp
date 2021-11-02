#include <iostream>
using namespace std;
int main ()
{
int x = 12, y = 5;
switch(x%y)
{
case 3 :
    cout << "Excellent!" << endl;
    break;
case 2 :
case 4 :
    cout << "Well done" << endl;

case 1 :
    cout << "You passed" << endl;
    break;
case 0:
    cout << "Better try again" << endl;
default :
    cout << "Invalid input" << endl;
}
return 0;
}

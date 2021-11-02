#include <iostream>
using namespace std;
int main ()
{
int x = 5, y;
int *r = &x;
int *s = &y;
*s = 7;// y = 7
*r += *s;// x += y
r = s;
cout<<x<<" "<<y<<endl;
cout<<*r<<" "<<*s<<endl;
return 0;
}

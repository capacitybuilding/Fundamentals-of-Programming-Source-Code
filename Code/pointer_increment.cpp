#include <iostream>
using namespace std;
int main ()
{
int var[3] = {10, 100, 200};
cout<<var<<endl<<&var[0]<<endl;

int *ptr = var;// int *ptr = &var[0];
for (int i = 0; i < 3; i++)
{
cout << "Address of var[" << i << "] = ";
cout << ptr << endl;
cout << "Value of var[" << i << "] = ";
cout << *ptr << endl;
// point to the next location
ptr++;
}
return 0;
}

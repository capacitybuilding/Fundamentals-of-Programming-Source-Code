#include <iostream>
using namespace std;
int main ()
{
int var[5] = {10, 100, 200, 30, 40};
for (int i = 0; i < 5; i++)
{
 cout << var[i] << "  ";
}
cout<<endl;
int *ptr = var;// int *ptr = &var[0];
*ptr = *ptr + 2;
ptr = ptr + 2;
*ptr = *(ptr - 1) + *(ptr + 1); // var[2] = var[1] + var[3];
ptr++; // ptr = ptr + 1;
(*ptr)++;
ptr = ptr + 1;
*ptr += *var;// var[4] += var[0];
ptr--;
*ptr += *(ptr - 2);// var[3] += var[1];
for (int i = 0; i < 5; i++)
{
 cout << var[i] << "  ";
}
cout<<endl;
ptr = var;
for (int i = 0; i < 5; i++)
{
 cout << *(ptr+i) << "  ";
}
return 0;
}

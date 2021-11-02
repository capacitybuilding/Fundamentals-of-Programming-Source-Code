#include <iostream>
using namespace std;
int main (){
int x=6, y=7, z;
cout<<x++<<endl;
z = x * y;
y = --z + x++;
cout<< x<<endl<<y<<endl<<z<<endl;
}

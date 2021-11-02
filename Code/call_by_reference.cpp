#include <iostream>
using namespace std;
void change(int &, int &);
int main (){
int a = 100, b = 200, ret;
cout <<a<< " " << b << endl;
change(a, b);
cout <<a<< " " << b << endl;
return 0;
}
void change(int & num1, int & num2){
num1 += num2++;
cout <<num1<< " " << num2<< endl;
}

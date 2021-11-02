#include <iostream>
using namespace std;
// function declaration
void change(int num1, int num2);
int main (){
int a = 100, b = 200, ret;
cout <<a<< " " << b << endl;
change(a, b);
cout <<a<< " " << b << endl;
return 0;
}
// function returning the max between two numbers
void max(int num1, int num2){
num1 += num2++;
cout <<num1<< " " << num2<< endl;
}

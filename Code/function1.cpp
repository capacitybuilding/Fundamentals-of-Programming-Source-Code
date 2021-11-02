#include <iostream>
using namespace std;
// function declaration
int max(int num1, int num2);
void add(int , int );
int main (){
int a = 100, b = 200, ret;
// calling a function to get max value.
ret = max(a, b);
cout << "Max value is : " << ret << endl;
add(10, 20);
return 0;
}
// function returning the max between two numbers
int max(int num1, int num2){
int result;
if (num1 > num2)
result = num1;
else
result = num2;
return result;
}


void add(int x, int y){
int c = x + y;
cout<<c<<endl;
}

#include<iostream>
using namespace std;
int main(){
int a=5, b=8, c=7;
bool x,y;
x = a>c || b!= c && a==c;
y = !x;
cout<<x<<endl<<y<<endl;

int d = 8/3 + a%2 - c*b;
cout<<d;
}

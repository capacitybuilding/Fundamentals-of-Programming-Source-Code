#include<iostream>
using namespace std;
int main(){

for( int a = 10; a < 20; a = a + 1 ){
if(a==15){
    continue;
}
cout << "value of a: " << a << endl;
}
}

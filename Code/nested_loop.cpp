#include <iostream>
using namespace std;
int main (){
    int i, j;
    for(i=2; i<50; i++) {
        bool prime = true;
        for(j=2; j <i; j++){
            if(i%j == 0){
                prime = false;
                break; // if factor found, not prime
            }
        }
        if(prime){
            cout<<i<<" ";
        }
    }
}

#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream in("number.txt");
    int num, sum=0;
   while(!in.eof()){
        in>>num;
        sum += num;
    }
    cout<<sum;
    in.close();

}

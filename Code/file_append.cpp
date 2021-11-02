#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream out("data.txt", ios::app);
    out<<"Hello world";
    out.close();
}

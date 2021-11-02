#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream out("data.txt");
    for(int i=0;i<10;i++)
        out<<i<<" ";
    out.close();
}

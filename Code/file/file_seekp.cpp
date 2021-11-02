#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream out("data.txt");
    for(int i=0;i<15;i++){
        out<<i<<" ";
    }
    cout<<out.tellp()<<endl;
    out.seekp(5);
    out<<" Bye";
    cout<<out.tellp()<<endl;

}

#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream in("data2.txt");
    if(in.fail()){
        cout<<"There is no connection estabilish between program and file"<<endl;
    }
    else{
        cout<<"Succesfully Connect";
    }

    in.close();
}

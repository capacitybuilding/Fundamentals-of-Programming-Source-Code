#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream in("student.txt");
    string name;
    //cin>>name;
    in>>name;
    cout<<name;
    in.close();

}

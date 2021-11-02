#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream in("student.txt");
    string name;
    in>>name;
    cout<<name;
    out.close();

}

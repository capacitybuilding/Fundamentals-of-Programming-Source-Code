#include<fstream>
#include<iostream>
using namespace std;
int main(){
   ifstream in("student_name.txt");
    string name;
    getline(in, name);
    cout<<name;
    in.close();

}

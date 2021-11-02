#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream in("student_name.txt");
    string name;
    //cout<<in.tellg()<<endl;
    in.seekg(5, ios::beg);
    in>>name;
    cout<<name<<endl;
    cout<<in.tellg()<<endl;
    in.close();

}

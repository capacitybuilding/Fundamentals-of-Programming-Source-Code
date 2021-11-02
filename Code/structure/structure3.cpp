#include<iostream>
using namespace std;
struct Student{
    string name;
    string id;
    int year;
    string dep;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Maeruf";
    s1.id = "r/0760/08";
    s1.year = 4;
    s1.dep = "CSE";
    s1.gpa = 3.8;

    cout<<"Student name:  "<<   s1.name    <<endl;
    cout<<"Student dep.:  "<<   s1.dep     <<endl;
    cout<<"Student id  :  "<<   s1.id      <<endl;
    cout<<"Student year:  "<<   s1.year    <<endl;
    cout<<"Student gpa :  "<<   s1.gpa     <<endl;
}

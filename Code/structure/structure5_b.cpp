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
    Student s2;
    cin>>s2.name>>s2.id>>s2.year>>s2.dep>>s2.gpa;

    cout<<"Student name:  "<<   s2.name    <<endl;
    cout<<"Student dep.:  "<<   s2.dep     <<endl;
    cout<<"Student id  :  "<<   s2.id      <<endl;
    cout<<"Student year:  "<<   s2.year    <<endl;
    cout<<"Student gpa :  "<<   s2.gpa     <<endl;
}

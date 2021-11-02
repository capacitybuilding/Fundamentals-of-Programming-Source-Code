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
    Student s2 = {"Jemal", "r/0665/08", 4, "ECE", 3.55};
    Student *pt = &s2;
    cout<<"Student name:  "<<   pt->name  <<endl;
    cout<<"Student dep.:  "<<   pt->dep     <<endl;
    cout<<"Student id  :  "<<   (*pt).id    <<endl;
    cout<<"Student year:  "<<   pt->year    <<endl;
    cout<<"Student gpa :  "<<   pt->gpa     <<endl;
}



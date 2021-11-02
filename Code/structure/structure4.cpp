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

    cout<<"Student name:  "<<   s2.name    <<endl;
    cout<<"Student dep.:  "<<   s2.dep     <<endl;
    cout<<"Student id  :  "<<   s2.id      <<endl;
    cout<<"Student year:  "<<   s2.year    <<endl;
    cout<<"Student gpa :  "<<   s2.gpa     <<endl;
}

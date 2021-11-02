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
}


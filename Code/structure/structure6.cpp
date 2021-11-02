#include<iostream>
using namespace std;
struct Student{
    string name;
    string id;
    int year;
    string dep;
    float gpa;
};
void display(Student stud);
void display(Student stud){
    cout<<"Student name:  "<<   stud.name    <<endl;
    cout<<"Student dep.:  "<<   stud.dep     <<endl;
    cout<<"Student id  :  "<<   stud.id      <<endl;
    cout<<"Student year:  "<<   stud.year    <<endl;
    cout<<"Student gpa :  "<<   stud.gpa     <<endl;

}
int main(){
    Student s2 = {"Jemal", "r/0665/08", 4, "ECE", 3.55};
    display(s2);

}

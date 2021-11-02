#include<iostream>
using namespace std;
struct Contact{
    string name;
    string phone;
    Contact *next;
};

int main(){
    Contact user1 = {"A", "098888..."};
    Contact user2 = {"B", "0999..."};
    Contact user3 = {"C", "096666..."};
    Contact *first = &user1;
    user1.next = &user2;
    user2.next = &user3;
    user3.next = NULL;

    Contact user4 = {"D", "097777..."};
    user3.next = &user4;
    user4.next = NULL;

    Contact user5 = {"E", "097777..."};
    user4.next = &user5;
    user5.next = NULL;


    Contact *start = first;
    while(start != NULL){
        cout<<start->name<<"    "<<start->phone<<endl;
        start = start->next;
    }




}

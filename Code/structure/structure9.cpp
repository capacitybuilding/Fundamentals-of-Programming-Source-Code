#include<iostream>
using namespace std;
struct Contact{
    string name;
    string phone;
};

int main(){
    Contact user[3] = {
        {"Rim", "+251 999 999 999"},
        {"Anis", "+251 222 222 222"},
        {"Hapi", "+251 110 000 000"}
        };

    cout<<user[0].name<<"   "<<user[0].phone<<endl;
    cout<<user[1].name<<"   "<<user[1].phone<<endl;
    cout<<user[2].name<<"   "<<user[2].phone<<endl;

    cout<<endl<<endl;
    for(int i=0;i<3;i++){
        cout<<user[i].name<<"   "<<user[i].phone<<endl;
    }
}

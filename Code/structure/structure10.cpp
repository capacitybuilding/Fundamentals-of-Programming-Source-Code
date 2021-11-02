#include<iostream>
using namespace std;
struct Contact{
    string name;
    string phone;
};

int main(){
    Contact user[3];

    for(int i=0;i<3;i++){
        cin>>user[i].name>>user[i].phone;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<user[i].name<<"   "<<user[i].phone<<endl;
    }
}

#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream x;
    x.open("data.txt");

    x<<"Hello student";

    x.close();
}

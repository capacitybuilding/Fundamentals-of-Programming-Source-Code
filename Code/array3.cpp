#include<iostream>
using namespace std;
int main ()
{
int n[5];

for (int i=0; i<5; i++){
    cin>>n[i];
}
int sum = 0;
for (int i=0; i<5; i++){
    sum = sum + n[i];
}
float ave = sum/5.0;
cout<<sum<<endl<<ave;
return 0;
}


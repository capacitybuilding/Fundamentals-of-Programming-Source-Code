#include <iostream>
using namespace std;
int main ()
{
int a[2][3],b[2][3], c[2][3];
for(int i=0; i<2;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}

for(int i=0; i<2;i++){
    for(int j=0;j<3;j++){
        cin>>b[i][j];
    }
}

for(int i=0; i<2;i++){
    for(int j=0;j<3;j++){
        c[i][j] = a[i][j] + b[i][j];
    }
}

for(int i=0; i<2;i++){
    for(int j=0;j<3;j++){
        cout<<c[i][j]<<"    ";
    }
    cout<<endl;
}
}

#include <iostream>
using namespace std;
int main ()
{
int a[3][3],b[3][3], c[3][3];
for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}

for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cin>>b[i][j];
    }
}

for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
            int sum = 0;
            for(int k=0; k<3;k++){
                sum += a[i][k] * b[k][j];
            }
        c[i][j] = sum;
    }
}

for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<c[i][j]<<"    ";
    }
    cout<<endl;
}
}

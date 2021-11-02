#include <iostream>
using namespace std;
int main ()
{
// an array with 5 rows and 2 columns.
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
int x[3][4] = {{1,2,3},{4,5,6,7},{8,9,10}};
x[2][3] = 100;
// output each array element's value
for ( int i = 0; i < 5; i++ ){
    for ( int j = 0; j < 2; j++ )
    {
        cout << "a[" << i << "][" << j << "]: ";
        cout << a[i][j]<< endl;
    }
}
return 0;
}

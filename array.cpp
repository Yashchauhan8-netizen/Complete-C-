#include<iostream>
using namespace std;
int main ()
{
    int matrix [2] [2]={ {3,5}, {9,2}};
    int row =2;
    int col =2;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

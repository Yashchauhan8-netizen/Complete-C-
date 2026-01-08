#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter the value of x:";
    cin>x;
    int arr[]={3,1,8,0,2,66,84,45,99,56};
    int count=0;
    for(int i=1;i<=10;i++){
        cout<<arr[i];
        if(arr[i]>x) {count++;
        }
        cout<<count;
    }
}
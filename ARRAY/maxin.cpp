#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,0,6,3,9,30,653,44,55};
    int mx = arr[0];
    int mn = arr[10];
    for(int i=0;i<=10;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<"maximum value is:"<<mx<<endl<<"minimum value is:"<<mn;
}
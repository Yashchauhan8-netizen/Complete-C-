#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,3,7,5,1,4,0,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
     cout<<"sum of array element is :=";
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }
    cout<<sum;
}
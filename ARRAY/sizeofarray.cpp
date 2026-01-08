#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,3,7,5,1,4,0,9,3};
    int n = sizeof(arr)/4;
    cout<<"number of element is:"<<n<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
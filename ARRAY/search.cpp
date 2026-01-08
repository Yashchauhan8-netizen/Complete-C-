#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,3,7,5,1,4,0,9,3};
    int x;
    cout<<"enter target :";
    cin>>x;
    bool flag =false;
    for(int i=0;i<=10;i++){
        if(arr[i]==x){
            flag =true;
            break;
        }
    }
    if(flag==true) cout<<x<<"is present";
    else cout<<x<<"is not present";
}
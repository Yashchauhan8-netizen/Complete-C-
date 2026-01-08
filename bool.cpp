#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    bool flag = true;  //true means prime
    for(int i=2;i,i=n/2;i++){
        if(n%i==0){
            flag = false; //false means composite
            break;
        }
        
    }
    if(n==1) cout<<"neither prime not composite";
    else if (flag==true) cout<<"prime";
    else cout<<"composite";
}
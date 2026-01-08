#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n :";
    cin>>n;
   int sum =0;
   while(n!=0){
    int ld =n%10;
    sum = sum + ld;
   }
   cout<<sum;
}
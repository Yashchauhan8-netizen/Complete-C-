#include<iostream>
using namespace std;
int main()
{
  int cp;
    cout<<"enter the cost price:";
    cin>>cp;
  int sp;
    cout<<"enter thr selling price";
    cin>>sp;
  if(sp>cp){
     cout<<"profit is:"<<sp-cp;
  }
  else if(sp<cp){
     cout<<"loss is:"<<sp-cp;
  }
  else{
    cout<<"no loss no profit";

  }
  
}                  
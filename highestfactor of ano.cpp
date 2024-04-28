#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int f=1;
    for(int i=n/2;i>=1;i--)
    {
        if(n%i==0)
        f=i;
        break;

        
    }
    cout<<f;
}
#include<iostream>
using namespace std;
int main(){
    int a[]={12,34,5,7,8,10};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++)
          {
              b[i]=a[n-i-1];
        cout<<b[i]<<" ";
          }
    }

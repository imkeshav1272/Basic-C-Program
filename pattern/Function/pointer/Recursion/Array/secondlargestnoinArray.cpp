#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 34, 4, 56, 67};
    int n = sizeof(arr) / 4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
         if(arr[i]>mx) mx=arr[i];
       // mx = max(mx, arr[i]);
    }
    cout<<mx<<" ";
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
    smax=max(smax,arr[i]);
    }
    cout<<smax<<" ";
}

#include<iostream>
using namespace std;


int main()
{
    int arr[] = {12, 34, 4, 56, 67};
    int n = sizeof(arr) / 4;
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
         if(arr[i]<mn) mn=arr[i];
       // mn = max(mn, arr[i]);
    }
    cout<<mn<<" ";
}
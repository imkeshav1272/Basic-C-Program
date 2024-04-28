#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,8,9};
    int product=1;
    for(int i=0;i<=5;i++){
        product*=arr[i];
    }
    cout<<product<<" ";

}
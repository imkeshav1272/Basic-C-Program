#include<iostream>
using namespace std;
//swapping two no using call by refernce

void swap(int* a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=12;
    int y=23;
    cout<<x<<" "<<y<<endl;
swap(&x,&y);
cout<<x<<" "<<y<<endl;
}
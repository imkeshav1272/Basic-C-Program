#include<iostream>
using namespace std;
int maxOFTwo(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    cout<<maxOFTwo(3,6);
}
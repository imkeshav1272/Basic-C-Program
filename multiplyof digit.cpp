#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int ld, multiple=1;
    
    while(n!=0){
        ld=n%10;
        n=n/10;
        multiple*=ld;


    }
    cout<<"the sum of digit of no = "<<multiple;

}
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "enter the value of n =";
    cin >> n;
    int fact;
    //for gp  1,2,4,8......
    for (int i = 1; i<= n-1; i++ )
    if(n%i==0)
    {
      cout<<i<<" " <<endl;
      fact=i;
    }
    cout<<"the highest factor of given n is "<<fact;
}
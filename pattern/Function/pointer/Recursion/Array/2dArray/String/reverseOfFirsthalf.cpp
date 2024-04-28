#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "keshav";
    cout << s << endl;
    int n = s.length(); // n=6
    reverse(s.begin(), s.begin() + n / 2);
    cout << s << endl;
    // int i=0;
    // int j=n-1;
    // while(i<j){
    // char temp=s[i];
    // s[i]=s[j];
    // s[j]=temp;
    // i++;
    // j--;
}
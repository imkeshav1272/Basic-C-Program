#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s = "keshav";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
}
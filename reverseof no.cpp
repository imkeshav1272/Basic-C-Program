#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a no : ";
    cin >> n;
    int ld, rev,

        while (n != 0)
    {
        ld = n % 10;
        n = n / 10;
        rev = rev * 10 + ld;
    }
    cout << "the reverse of  no  is" << rev << endl;
}

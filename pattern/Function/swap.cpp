#include <iostream>
using namespace std;
void swap(int &x, int &y) //pass by refernce
{
    int temp = x;
    x = y;
    temp = y;
}
int main()
{
    int x = 2;
    int y = 4;
    cout << x << " " << y << endl;

    swap(x, y);
    cout << x << " " << y << endl;
}

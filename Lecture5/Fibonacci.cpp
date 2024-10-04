#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the value of n " << endl;
    cin >> n;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
    for (int i = 0, j = 1, k = 2; i >= 0 && j >= 1 && k >= 2; i--, j--, k--)
    {
        cout << i << " " << j << " " << k << endl;
    }
}
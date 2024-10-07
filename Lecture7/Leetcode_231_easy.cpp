// 231. Power of Two
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 1;
    bool flag = 0;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            cout << "true" << endl;
            flag = 1;
            break;
        }
        if (ans < INT_MAX / 2)
        {
            ans *= 2;
        }
    }
    if (!flag)
    {
        cout << "false" << endl;
    }
}
// 7. Reverse Integer

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the value of x" << endl;
    cin >> x;

    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((x > INT_MAX / 10) || (x < INT_MIN / 10))
        {
            ans = 0;
            break;
        }
        ans = ans * 10 + digit;
        x /= 10;
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 2;
    cout << "Enter the value of n" << endl;
    cin >> n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i += 2;
    }
    cout << "Sum of even numbers is " << sum << endl;
}
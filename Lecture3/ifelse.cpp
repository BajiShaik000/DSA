#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << " enter a character " << endl;
    cin >> ch;
    if ((ch > 64) && (ch < 91))
    {
        cout << " Capital Letter " << endl;
    }
    else if ((ch > 96) && (ch < 123))
    {
        cout << " Small Letter " << endl;
    }
    else if ((ch > 47) && (ch < 58))
    {
        cout << " Number " << endl;
    }
    else
    {
        cout << " Not a alphabet and Not a number" << endl;
    }
}
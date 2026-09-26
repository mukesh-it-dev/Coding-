#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0, y = 1, z;

    for(int i = 1; i <= n; i++)
    {
        cout << x << " ";

        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}
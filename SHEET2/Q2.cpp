#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 2;

    while (i <= N)
    {
        cout << i << endl;
        i = i + 2;
    }

    if (N < 2)
    {
        cout << -1 << endl;
    }

    return 0;
}
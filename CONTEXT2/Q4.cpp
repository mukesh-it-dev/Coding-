#include <iostream>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long L, R;
        cin >> L >> R;

        if (L > R)
        {
            swap(L, R);
        }

        long long sum = R * (R + 1) / 2
                      - (L - 1) * L / 2;

        cout << sum << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    int ans = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int sum = 0;

        while (temp > 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }

        if (a <= sum && sum <= b)
        {
            ans = ans + i;
        }
    }

    cout << ans << endl;

    return 0;
}
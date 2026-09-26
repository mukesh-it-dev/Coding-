#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int even = 0;
    int odd = 0;
    int negative = 0;
    int positive = 0;

    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            positive++;
        }
        else if (x < 0)
        {
            negative++;
        }
    }

    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << positive << '\n';
    cout << "Negative: " << negative << endl;

    return 0;
}
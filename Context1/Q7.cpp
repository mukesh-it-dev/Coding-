#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long d3 = min(n, min(m, k));

    n -= d3;
    m -= d3;
    k -= d3;

    long long d1 = min(n / 2, k);

    cout << d3 + d1 << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cout << 4*i + 1 << " "
             << 4*i + 2 << " "
             << 4*i + 3 << " PUM" << endl;
    }

    return 0;
}
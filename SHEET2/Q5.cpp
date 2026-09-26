#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x;
    cin >> x;

    int maximum = x;

    for(int i = 2; i <= N; i++)
    {
        cin >> x;

        if(x > maximum)
        {
            maximum = x;
        }
    }

    cout << maximum;

    return 0;
}
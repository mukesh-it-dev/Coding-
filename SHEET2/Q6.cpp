#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int second_mx = INT_MIN;
    int mx = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x > mx)
        {
            second_mx = mx;
            mx = x;
        }
        else if(x > second_mx && x != mx)
        {
            second_mx = x;
        }
    }

    cout << "max val : " << mx << endl;
    cout << "second mx: " << second_mx << endl;

    return 0;
}
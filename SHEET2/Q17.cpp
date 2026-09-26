#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;

    cin >> n;

    for(int i=1; i*i<=n ; i++)
              if(n%i==0)

                  cout << i << ' ';
    if(i*i == n)i--;
    for(; i>=1;i--)
          if(n%i ==0)
               cout << n/i << ' ';

        return 0;
}
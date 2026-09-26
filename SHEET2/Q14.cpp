#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int t;
        cin >> t;
        int rem;

        if(t==0)
        {
            cout << 0;
        }
        else{
        while(t>0)
        {
            rem=t%10;
            cout << rem <<" " ;
            t=t/10;
        }
    }
        cout << '\n';

    }
    return 0;   
}
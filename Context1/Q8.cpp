#include<iostream>
using namespace std;

int main()
{
    long long n,k,a;
    cin >> n >> k >>a;

    long long pro = n*k;
    if(pro % a != 0)
    {
        cout << "double";
    }
    else 
    {
        long long res = pro / a;
        if(res >= -2147483648LL && res <= 2147483648LL)
        {
            cout << "int";
        }
        else 
        {
            cout << "long long";
        }
        
    }
    return 0;
}
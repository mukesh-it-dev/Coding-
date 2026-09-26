#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if(a - b * c ==d || a - b + c ==d ||a + b -c==d || a + b * c==d||
    a * b - c==d || a * b + c==d )
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
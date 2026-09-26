#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
   int cnt=0;
   
   for(int i=1 ; i <= x ; i++)
       if(x % i == 0)
       cnt++;
       cout << (cnt == 2 ? "YES" : "NO") << endl;
   return 0;
}
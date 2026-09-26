#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp=n;
   int reverse=0;
   int d;
   while(n>0)
   {
    d=n%10;
    reverse=reverse*10+d;
    n=n/10;
   } 
   cout << reverse << endl;
   if(temp==reverse)
   {
     cout <<"YES";
   }
   else 
   {
    cout << "NO";
   }
   return 0;
}
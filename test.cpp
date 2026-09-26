// // // // // // // // // // // #include <iostream>
// // // // // // // // // // // using namespace std;

// // // // // // // // // // // int main() {
// // // // // // // // // // //     long long A, B, C, D;

// // // // // // // // // // //     cin >> A >> B >> C >> D;

// // // // // // // // // // //     cout << "Difference = " << (A * B - C * D);

// // // // // // // // // // //     return 0;
// // // // // // // // // // // }
// // // // // // // // // // #include<iostream>
// // // // // // // // // // #include<iomanip>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     double r;
// // // // // // // // // //     cin >> r;
// // // // // // // // // //     double pi= 3.141592653;
// // // // // // // // // //     double area = pi*r*r;
// // // // // // // // // //      cout << fixed << setprecision(9) << area << endl;

// // // // // // // // // // }
// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     long long a,b;
// // // // // // // // //     cin >> a >> b;
// // // // // // // // //     cout << a%10 + b%10 << endl;
// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // // long long n,i,sum=0;
// // // // // // // // cin >> n;
// // // // // // // // for(i=1;i<=10;i++)
// // // // // // // // {
// // // // // // // //     sum=sum+i;
// // // // // // // // }
// // // // // // // // cout << sum << endl;
// // // // // // // // return 0;

// // // // // // // // }
// // // // // // // // #include <iostream>
// // // // // // // // #include <cmath>
// // // // // // // // using namespace std;

// // // // // // // // int main() {
// // // // // // // //     int A, B;
// // // // // // // //     cin >> A >> B;

// // // // // // // //     double result = (double)A / B;

// // // // // // // //     cout << "floor " << A << " / " << B << " = " << (int)floor(result) << endl;
// // // // // // // //     cout << "ceil " << A << " / " << B << " = " << (int)ceil(result) << endl;
// // // // // // // //     cout << "round " << A << " / " << B << " = " << (int)round(result) << endl;

// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int a,b;
// // // // // // //     cin >> a >> b;
// // // // // // //     if(a>=b)
// // // // // // //     {
// // // // // // //         cout << "Yes";

// // // // // // //     }
// // // // // // //     else
// // // // // // //     {
// // // // // // //         cout << " No";
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     long long a,b;
// // // // // //     cin >> a >> b;
// // // // // //     if(a%b==0 || b%a==0)
// // // // // //     {
// // // // // //         cout << "multiples";
// // // // // //     }
// // // // // //     else
// // // // // //     {
// // // // // //         cout << " No multiples ";
// // // // // //     }
// // // // // //     return 0;
// // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     long long a,b,c;
// // // // // //     cin >> a >> b >> c;
    
// // // // // // }
// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main() {
// // // // //     string F1, S1, F2, S2;

// // // // //     cin >> F1 >> S1;
// // // // //     cin >> F2 >> S2;

// // // // //     if (S1 == S2) {
// // // // //         cout << "ARE Brothers";
// // // // //     } else {
// // // // //         cout << "NOT";
// // // // //     }

// // // // //     return 0;
// // // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int a,b;

// // // //     cin >> a >> b;
// // // //      if (a%b==0 || b%a==0)
// // // //         cout << "Multiples" << endl;
// // // //      else
// // // //         cout << " Not Multiples ";
     
// // // //      return 0;
// // // // }
// // // // #include <iostream>
// // // // using namespace std;

// // // // int main() {
// // // //     char X;
// // // //     cin >> X;

// // // //     if (X >= '0' && X <= '9') {
// // // //         cout << "IS DIGIT";
// // // //     }
// // // //     else {
// // // //         cout << "ALPHA" << endl;

// // // //         if (X >= 'A' && X <= 'Z') {
// // // //             cout << "IS CAPITAL";
// // // //         }
// // // //         else {
// // // //             cout << "IS SMALL";
// // // //         }
// // // //     }

// // // //     return 0;
// // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     char x;
// // // //     cin >> x;
// // // //     if(x>='a' && x<='z')
// // // //     {
// // // //         cout << char(x-32) << endl;
// // // //     }
// // // //     else
// // // //     {
// // // //         cout << char(x+32) << endl;
// // // //     }
// // // //     return 0;
// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // // int x;
// // // cin >> x;
// // // x = abs(x);
// // // while(x>=10)
// // // {
// // //     x=x%10;
// // // }
// // // if(x%2==0)
// // // {
// // //   cout << " even";
// // // }
// // // else
// // // {
// // //     cout << " Odd ";
// // // }
// // // return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     n = abs(n);  

// //     while (n >= 10) {
// //         n = n / 10;
// //     }

// //     if (n % 2 == 0)
// //         cout << "Even";
// //     else
// //         cout << "Odd";

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     double x, y;
// //     cin >> x >> y;

// //     if (x == 0 && y == 0)
// //     {
// //         cout << "Origem";
// //     }
// //     else if (x == 0)
// //     {
// //         cout << "Eixo Y";
// //     }
// //     else if (y == 0)
// //     {
// //         cout << "Eixo X";
// //     }
// //     else if (x > 0 && y > 0)
// //     {
// //         cout << "Q1";
// //     }
// //     else if (x < 0 && y > 0)
// //     {
// //         cout << "Q2";
// //     }
// //     else if (x < 0 && y < 0)
// //     {
// //         cout << "Q3";
// //     }
// //     else
// //     {
// //         cout << "Q4";
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
//     int days;
//     cin >> days;

//     int year = days / 365;
//     days = days % 365;

//     int month = days / 30;
//     days = days % 30;

//     cout << year << " Year " <<  '\n'  << month << " Month " << '\n' << days << " Days";

//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(x>=0 &&x<=25)
    {

        cout << "Interval [0,25]";
    }
    else if(x>25 && x<=50)
    {
        cout << " Interval (25,50]";
    }
    else if(x>50 && x<=75)
    {
        cout << " Interval (50,75]";
    }
    else if(x>75 && x<=100)
    {
        cout << " Interval (75,100]";
    }
    else 
    {
        cout<< "Out of Intervals";
    }
    return 0;
}
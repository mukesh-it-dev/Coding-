// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int a,b,c;
// // // //     cin >> a >> b >> c;
// // // //     int x=a,y=b,z=c;
// // // //     if(y<x)
// // // //     {
// // // //        swap(y ,x);
// // // //     }
// // // //     if(z<x)
// // // //     {
// // // //      swap(z, x);
// // // //     }
// // // //     if(y>z)
// // // //     {
// // // //        swap(y, z);
// // // //     }
// // // //     cout << x << '\n' << y << '\n' << z << endl;
// // // //     cout << a << '\n' << b << '\n' << c;
// // // //     return 0;

// // // // }    
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     double x;
// // //     cin >> x;
// // //     int integer_part=x;
// // //     if(x == integer_part)
// // //     {
// // //         cout << "int " << integer_part << endl;
// // //     }
// // //     else 
// // //     {
// // //         cout << "float " << integer_part << ' ' << x-integer_part << endl;
// // //     }
// // // return 0;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //    int a,b;
// // //    char s;
// // //    cin >> a >> s >> b;
// // //   if((s == '>' && a > b) || (s == '<' && a < b) || (s == '=' && a == b))
// // //   cout << "Right" << endl;
// // //   else
// // //       cout << "Wrong" << endl;
// // //       return 0; 
// // // }
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int a,b,c;
// //     char sign,equalChar;
// //     cin >> a >> sign >> b >> equalChar >> c;
// //    int res = a + b;
// //    if(sign == '-') res =a-b;
// //    else if(sign == '*') res=a*b;
// //    if(res == c)
// //        cout << "Yes" << endl;
// //    else
// //        cout << res << endl;
// //        return 0;

// // }    
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int l1,l2,r1,r2;
// //    cin >> l1 >> r1 >> l2 >> r2;
// //    int start= max(l1, l2);
// //    int end= min(r1, r2);
// //    if(start <= end)
// //    {
// //        cout << start << ' ' << end << endl;
// //    }
// //    else
// //    {
// //     cout << -1 << endl;
// //    }
// // return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     long long a,b,c,d;
//     cin >> a >> b >> c >> d;
//     a %=100;
//     b %=100;
//     c %=100;
//     d %=100;
//     if((a * b * c * d)%100 < 10)
//     cout << '0' << (a * b * c * d)%100 << endl;
//     else 
//     cout << (a * b * c * d)%100 << endl;
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    if (B * log(A) > D * log(C))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
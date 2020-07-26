//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 282A - Bit++
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
   unsigned n;
   st s;
   ll a=0; 

   cin >> n;
   while(n--)
   {
       cin >> s;
       if(s=="++X" || s=="X++")  a++;
       else if(s=="--X" || s=="X--") a--;
   }

   cout << a << endl;

return 0;
}

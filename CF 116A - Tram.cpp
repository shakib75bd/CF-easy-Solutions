//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 116A - Tram
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,a,b,temp=0,temp2 = 0,temp3 = 0,temp4;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        temp3 = abs(temp2 - a);
        temp2 = b + temp3;
        temp4 = max(temp2,temp);
        temp = temp4;
        a=0;
        b=0;
    }

    cout << temp4 <<endl;

return 0;
}

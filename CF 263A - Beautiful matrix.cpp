//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 263A - Beautiful matrix  
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col_el, i, j, ans ;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin >> col_el ;
            if(col_el==1) ans = abs(i-3) + abs(j-3);
        }
    }
    cout << ans <<endl;

return 0;
}

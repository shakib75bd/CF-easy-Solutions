//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 405A - Gravity Flip
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;    
    
int main()          
{
    int n;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
    }

    sort(ara,ara+n);

     for(int i=0; i<1; i++)
    {
        cout << ara[i];
    }
    for(int i=1; i<n; i++)
    {
        cout << " " << ara[i];
    }   

return 0;
}

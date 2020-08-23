//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 136A - Presents
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;        

int main()          
{
    int n;
    cin >> n;
    int pri;
    int res_ara[n];
    for(int i=0;i<n;i++)
    {
        cin >> pri;
        res_ara[pri-1]=(i+1);
    }
    for(int i=0;i<n;i++) cout<<res_ara[i]<<" ";

return 0;
}

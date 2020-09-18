//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 43A - Football
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define tc ll t;cin>>t;while(t--)
 
int main()
{
    int t;
    cin >> t;
 
    vector<st>vec;
    st s;
 
    for(int i=0; i<t; i++)
    {
        cin >>s;
        vec.push_back(s);
    }
 
    sort(vec.begin(),vec.end());
    cout<<vec[t/2];
 
    return 0;
}

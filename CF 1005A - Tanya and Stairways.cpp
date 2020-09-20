//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1005A - Tanya and Stairways
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
    int n;
    cin >> n;
    int ara[n];

    cin >> ara[0];
    int m;
    m=ara[0];
    int count=0;

    vector<int>sep;

    for(int i=1; i<n; i++)
    {
        cin >> ara[i];
        if(ara[i]<=m)
        {
            count++;
            sep.push_back(m);
        }
        m= ara[i];
    }

    sep.push_back(ara[n-1]);
    cout<<sep.size()<<endl;
    for(int i = 0; i < sep.size(); i++) cout<<sep[i]<<" ";


   return 0;
}

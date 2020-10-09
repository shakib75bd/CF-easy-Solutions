//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 937A - Olympiad
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define flf for(int i=0; i<n; i++)
#define tc ll t;cin>>t;while(t--)


int main()
{
    int n;
    cin >> n;
    int ara[n];

    flf cin >> ara[i];
    int count=0;

    set<int>dis;
    flf{
        dis.insert(ara[i]);
        if(ara[i]==0) count++;
    }

    if(count==0) cout<<dis.size()<<endl;
    else cout<< dis.size() - 1 <<endl;

    return 0;
}

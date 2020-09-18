//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 988 A - Diverse Team
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
    int n,k;
    cin >> n >> k;
    set<int> disnum;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
        disnum.insert(ara[i]);
    }
 
    if(disnum.size()<k) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        int count, count2=0 ;
        cout<<"1 ";
        for(int i=1;i<n;i++)
        {
            if(count2==(k-1)) break;
            count = 0;
            for(int j=0; j<i; j++)
            {
                if(ara[i]==ara[j]) count++;
            }
            if(count==0)
            {
                cout<<i+1<<" ";
                count2++;
            }
        }
    }
 
    return 0;
}

//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 320A -  Magic Numbers
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
    st s;
    cin >> s;
    int aa=0;
 
    if(s[0]!='1') cout<<"NO\n";
 
    else if(s[0]=='1')
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
            {
                cout<<"NO\n";
                aa++;
                break;
            }
        }
 
        if(aa==0)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1' || s[i]=='4') aa++;
                else
                {
                    cout<<"NO\n";
                    break;
                }
 
            }
            if(aa==s.size())
            {
                cout<<"YES\n";
                aa=0;
            }
 
        }
    }
 
    else cout<<"YES\n";
 
    return 0;
}

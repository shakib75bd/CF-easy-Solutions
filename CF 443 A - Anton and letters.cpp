//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 443 A - Anton and letters
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;    

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define fxsp fixed<<setprecision    

int main()          
{
    st s;
    getline(cin,s);

    if(s=="{}") cout<<0;
    else
    {
        set<char>dis;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >=97 && s[i] <=122) 
            {
                dis.insert(s[i]);
            } 
        }
        cout<<dis.size();    
    }

return 0;
}

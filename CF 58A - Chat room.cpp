//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 58A - Chat room
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    st s, s2 = "hello";
    int a=0,b=0;
    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s2[a]) 
        {
            a++;
            b++;
        }   
        if(a==5) break; 
    }
    
    if(a==5) cout<<"YES\n";
    else cout<<"NO\n";

return 0;
}

// Here I cpmapared two string, In this way I dont need to worry about double alph. so its the easier way.

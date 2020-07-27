//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 96A -  Football
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    st s;
    int count = 1;
    getline(cin,s);

    for(int i=0; i<s.size(); i++)
    { 
        if(count>=7)
        {
            count =7;
            break;
        }
        if(s[i]!=s[i+1]) 
        {
            count=1;
            continue;
        }
        else if(s[i]==s[i+1])
        {
            count++;
        }
    }
    if (count>=7)  cout<< "YES\n"; 
    else if(count<7) cout<< "NO\n";

return 0;
}

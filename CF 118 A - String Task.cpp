//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: Cf 118 A - String Task
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
    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] >=65 && s[i]<=92) s[i] = s[i]+32;

        if(s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i]=='o'|| s[i]=='u' || s[i]=='y') continue;

        cout<<"."<<s[i];

        if(s[s.size()]=='s' || s[s.size()]=='e' || s[s.size()] == 'i' || s[s.size()]=='o'|| s[s.size()]=='u' || s[s.size()]=='y') continue;
    }

    cout<<endl;

    return 0;
}

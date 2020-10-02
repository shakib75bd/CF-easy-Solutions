//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1095A - Repeating Cipher
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
#define bbw cout<<"Bye Bye World!\n";

int main()
{
    uns n;
    cin >> n;
    st c;
    cin >> c;
    int p=0;
    for(int i=0;i<n;i=i+p)
    {
        cout<<c[i];
        p++;
    }

}

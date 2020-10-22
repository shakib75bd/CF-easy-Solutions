//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1344A - Boring Apartments
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
 
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define flf for(ll i=0; i<n; i++)
#define tc ll t;cin>>t;while(t--)
 
 
int main() {
    tc{
        int n=0,p;
        st s;
        cin>>s;
        p= int(s[0])-48;
        n= (p-1)*4 + s.size();
 
        int main=0, modu=0;
        main= n/4;
        modu= n%4;
        if(modu==1) modu=1;
        else if(modu==2) modu=3;
        else if(modu==3) modu=6;
 
        cout<< main*10 + modu<<endl;
 
    }
}

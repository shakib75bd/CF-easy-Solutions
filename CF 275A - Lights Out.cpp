//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 275A - Lights OUT
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
    int ara1[3], ara2[3], ara3[3];

    int n=3;

    flf cin >> ara1[i];
    flf cin >> ara2[i];
    flf cin >> ara3[i];

    //c1

    //c1r1

    int c1r1=ara1[0]+ara1[1]+ara2[0];
    if(c1r1%2==0) cout<<"1";
    else cout<<"0";

    //c1r2

    int c1r2=ara1[0]+ara1[1]+ara1[2]+ara2[1];
    if(c1r2%2==0) cout<<"1";
    else cout<<"0";

    //c1r3

    int c1r3=ara1[1]+ara1[2]+ara2[2];
    if(c1r3%2==0) cout<<"1\n";
    else cout<<"0\n";

    //c2

    //c2r1

    int c2r1=ara1[0]+ara2[0]+ara3[0]+ ara2[1];
    if(c2r1%2==0) cout<<"1";
    else cout<<"0";

    //c2r2

    int c2r2=ara2[0]+ara2[1]+ara2[2]+ ara1[1] + ara3[1];
    if(c2r2%2==0) cout<<"1";
    else cout<<"0";

    //c2r3

    int c2r3=ara1[2]+ara2[2]+ara2[1]+ ara3[2];
    if(c2r3%2==0) cout<<"1\n";
    else cout<<"0\n";

    //c3

    //c3r1

    int c3r1=ara2[0]+ara3[0]+ ara3[1];
    if(c3r1%2==0) cout<<"1";
    else cout<<"0";

    //c3r2

    int c3r2=ara3[0]+ara3[1]+ara3[2]+ ara2[1];
    if(c3r2%2==0) cout<<"1";
    else cout<<"0";

    //c3r3

    int c3r3=ara2[2]+ara3[1]+ ara3[2];
    if(c3r3%2==0) cout<<"1\n";
    else cout<<"0\n";


    return 0;
}

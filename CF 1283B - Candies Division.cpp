    //           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
    //  Problem name: CF 1283B - Candies Division
    //  Lang: C++
    //  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

    #include<bits/stdc++.h>
    #include <numeric>
    using namespace std;

    #define uns unsigned
    #define ll long long
    #define dl double
    #define st string
    #define ch char
    #define flf for(ll i=0; i<n; i++)
    #define tc ll t;cin>>t;while(t--)


    int main()
    {
        tc{
            int n,k;
            cin >>  n >>k;

            cout<<(n/k)*k+min(k/2,n%k)<<endl;
        }

        return 0;
    }

//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1344 B - Yet Another Bookshelf
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
        int n; cin >>n;
 
        int ara[n];
        flf cin >> ara[i];
 
        int start, end;
 
        flf{
            if(ara[i]==1){
                start = i;
                break;
            }
        }
 
        reverse(ara, ara+n);
        flf{
            if(ara[i]==1){
                end = n-i-1;
                break;
            }
        }
        reverse(ara, ara+n);

        int count=0;
        for(int i=start; i<=end; i++){
            if(ara[i]==0) count++;
        }
 
        cout<<count<<endl;
 
    }
    return 0;
}

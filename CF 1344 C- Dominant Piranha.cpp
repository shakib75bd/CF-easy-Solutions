//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1344 C- Dominant Piranha
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
        ll n; cin >>n;
        ll ans=0;
 
        ll ara[n];
        flf cin >> ara[i];
 
        ll ara2[n];
        flf ara2[i]=ara[i];
        sort(ara2, ara2+n);
 
        int max_ar = ara2[n-1];
        
        if(ara2[n-1] - ara2[0]==0) cout<<"-1\n";
        else{
 
            flf {
                
                if(ara[i]==max_ar){
                    if(i==0){
                        if(ara[1]<max_ar) {
                            ans=1;
                            break;
                        }
                    }
                    
                    else{
                        if(ara[i-1]<max_ar || ara[i+1]<max_ar) {
                            ans = i+1;
                            break;
                        }
                    }
                    
                }
            }
            
            cout<<ans<<endl;
        }
    }
    return 0;
}

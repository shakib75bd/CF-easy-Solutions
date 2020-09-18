//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 978A - Remove Duplicates
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
 
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    int i;
    vector<int> v;
    set<int> s;
    for(i=0;i<n;i++)
        cin>>a[i];
 
    for(i=n-1;i>=0;i--){
        if(s.count(a[i])==0){
            s.insert(a[i]);
            v.push_back(a[i]);
        }
    }
 
    cout<<v.size()<<endl;
    for(i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
 
    return 0;
}

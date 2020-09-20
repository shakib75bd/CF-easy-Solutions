//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1005 B - Delete from the Left
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
    st s1, s2;
    cin >> s1 >> s2;
    
    int total_size;
    total_size = s1.size() + s2.size();

    int max_size;
    max_size = max(s1.size(),s2.size());


    int count = 0;

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    for(int i=0; i<max_size; i++)
    {
        if(s1[i]==s2[i]) count++;
        else break;
    }

    cout<<total_size - (2*count)<<endl;

   return 0;
}

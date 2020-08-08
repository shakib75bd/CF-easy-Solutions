//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 149A - Business trip
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n, ara[12],sum = 0,count = 0;
      cin >> n;
      for(int i=0;i<12;i++)
      {
          cin>>ara[i];
      }
      
      sort(ara,ara+12);
      reverse(ara,ara+12);

      for(int i=0;i<12;i++)
      {
          if(sum>=n) break;
          sum = sum + ara[i];
          count++;
      }
      if(sum<n) cout <<"-1\n";
      else cout<<count<<endl;
      
return 0;
}

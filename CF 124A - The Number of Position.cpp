//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 124A - The Number of Position
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,b;
     cin >> n >> a >> b;
     int c = a+1; int d = n-b;
     int x = max(c,d);
     cout<< n - x + 1<<endl;
return 0;
}

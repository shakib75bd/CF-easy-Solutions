//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 479A - Expressions
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a,b,c;
      cin >> a >> b >> c;

      int op1,op2,op3,op4,op5;

      op1 = a + b * c;
      op2 = a * (b+c);
      op3 = a*b*c;
      op4 = (a+b) * c;
      op5 = a+b+c;

      int ans;
      ans = max(op1,op2);
      ans = max(ans,op3);
      ans = max(ans,op4);
      ans = max(ans,op5);

      cout<<ans;

return 0;
}

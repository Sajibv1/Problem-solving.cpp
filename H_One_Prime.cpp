// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int a;
  cin>>a;
 if(a<2){ cout<<"NO"<<endl; return 0;}
  if(a==2){ cout<<"YES"<<endl;  
 return 0;}

  for(int i=2;i<=a/2;i++)
  { 
    if(a%i==0) {cout<<"NO"<<endl;
    return 0;}
  }
cout<<"YES"<<endl;
    return 0;
}
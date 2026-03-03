#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
           
long long int n,r,t;
cin>>n>>r>>t;
while(n--)
{
   long long int p;
    cin>>p;
    if((t/p)<=r)
    cout<<t/p<<" ";
    else cout<<r<<" ";
}
 
 
 
    return 0;
}
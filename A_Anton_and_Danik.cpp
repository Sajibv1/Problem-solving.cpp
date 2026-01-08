// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
   string s;
   cin>>s; int d=0,a=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='D') {d++;}
    if(s[i]=='A'){ a++;}
   }
    if(a==d) cout<<"Friendship"<<endl;
 
   if(d>a) cout<<"Danik"<<endl;
 if(d<a) cout <<"Anton"<<endl;
 
    return 0;
}
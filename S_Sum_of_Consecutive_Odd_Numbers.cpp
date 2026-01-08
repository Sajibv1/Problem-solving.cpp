// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


int t;
cin>>t;
while(t--)
{ int a, b;
cin>>a; cin>>b; int mn= min(a,b); int mx= max(a,b); int sum =0;
if((mn!=mx)||abs(mn-mx)!=1){
for(int i=mn+1;i<mx;i++){
if(i%2!=0)
sum = sum +i;} }
cout<<sum<<"\n";
}
    return 0;
}
// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if( n%2==0)
    {
        for(int i=2;i<=n/2;i=i+2)
        {
            if(n%i==0)
             cout<<"YES"<<endl;
             return 0;
        }
    }
cout<<"NO"<<endl;
   
    return 0;
}
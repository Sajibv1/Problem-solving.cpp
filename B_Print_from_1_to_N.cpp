// ﷽
#include <bits/stdc++.h>
using namespace std;

void hf(int n, int x)
{ 
    if(x>n) return;
    cout<<x<<endl;
    hf(n,x+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 1;
    int n; cin>>n;
   hf(n,x);
    return 0;
}
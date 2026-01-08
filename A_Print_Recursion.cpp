// ﷽
#include <bits/stdc++.h>
using namespace std;

void hf(int n)
{
    if(n==0) return; 
    n= n-1;
    cout<<"I love Recursion"<<endl;
    hf(n);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
   hf(n);
    return 0;
}



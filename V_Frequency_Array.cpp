#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n, m;
cin>>n>>m;
vector<int> mainarr(n);
vector<int> freqarr(m+1);
for(int i=0;i<n;i++)   
{
    cin>>mainarr[i];
    freqarr[mainarr[i]]++;
}    

 for(int i=1;i<m+1;i++)
 {
    cout<<freqarr[i]<<endl;
 }
 
 
    return 0;
}
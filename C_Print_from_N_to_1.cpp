// ﷽
#include <bits/stdc++.h>
using namespace std;
void hf(int n)
{
if(n<1)
{cout<<endl;
return;}
cout<<n;
if (n > 1) {
        cout << " ";
    }
hf(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
hf(n);
    return 0;
}
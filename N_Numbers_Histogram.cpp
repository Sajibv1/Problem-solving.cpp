// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char s;
    cin>>s;
    int n ;
    cin>>n;
    int i=0;
    while(i!=n)
    {   int num;
        cin>>num;

        string sb(num,s);
        cout<<sb<<endl;
        i++;
    }

    return 0;
}
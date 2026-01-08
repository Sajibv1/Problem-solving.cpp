// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=0;
    while(x!=n)
    {   x++;
        vector<int>arr(27,0);
        int ssize;
        cin>>ssize;
        string s;
        cin>>s;
        int sum =0;
        for(int i=0; i<ssize; i++)
        {
            if(arr[s[i]-'A']==0)
            {
                arr[s[i]-'A'] +=2;
                sum +=  2;
            }
            else   {
                arr[s[i]-'A']++;
                sum = sum +1;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}
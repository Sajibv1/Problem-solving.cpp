// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
string str;
cin>>str;
std::sort(str.begin(), str.end());
 auto new_end = std::unique(str.begin(), str.end());

    
    str.erase(new_end, str.end());
if(str.size()%2!=0) cout<<"CHAT WITH HER!";


else cout<<"IGNORE HIM!";






    return 0;
}
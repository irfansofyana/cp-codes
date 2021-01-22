#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    int i = 0;
    while (i < (int)s.size()){
        int j = i;
        int cur = 0;
        while (j < (int)s.size() && s[j] == s[i]){
            ++cur;
            ans = max(ans, cur);
            ++j;
        }
        i = j;
    }
    cout << ans << '\n';
    return 0;
}
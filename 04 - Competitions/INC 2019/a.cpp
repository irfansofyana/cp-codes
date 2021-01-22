#include <bits/stdc++.h>
using namespace std;

int N, ans;
string a, b;
int frek[30], frek2[30];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> a >> b;
    for (int i = 0; i < N; ++i){
        if (a[i] == b[i]){
            frek[a[i]-'a']++;
        }else {
            frek[a[i]-'a']++;
            frek[b[i]-'a']++;
        }
    }
    for (int i = 0; i < 26; ++i){
        if (frek[i] > ans){
            ans = frek[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, ans;
string s;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; ++i){
        for (int j = i; j < n; ++j){
            int ver = 0;
            int hor = 0;
            for (int k = i; k <= j; ++k){
                if (s[k] == 'U') ++ver;
                else if (s[k] == 'D') --ver;
                else if (s[k] == 'R') ++hor;
                else --hor;
            }
            if (ver == 0 && hor == 0){
                ++ans;
            }
        }
    }
    cout << ans << '\n';
}
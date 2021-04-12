#include <bits/stdc++.h>
using namespace std;

int frek[2], t, pairs;
string s;
bool can;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> frek[0] >> frek[1];
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            frek[s[i]-'0']--;
        }
    
        int i = 0, j = (int)s.size() - 1;
        pairs = 0;
        can = true;
        
        while (i <= j && can) {
            if (s[i] == s[j]) {
                if (s[i] == '?' && j!=i) ++pairs;
                ++i; --j;
                continue;
            }
            if (s[i] == '?') {
                if (frek[s[j]-'0'] <= 0) {
                    can = false;
                }
                --frek[s[j]-'0'];
                s[i] = s[j];
            }
            else if (s[j] == '?') {
                if (frek[s[i]-'0'] <= 0) {
                    can = false;
                }
                --frek[s[i]-'0'];
                s[j] = s[i];
            } else {
                can = false;
            }
            ++i; --j;
        }

        if (!can) cout << -1 << '\n';
        else if (2 * pairs > frek[0] + frek[1]) cout << -1 << '\n';
        else {
            int i = 0, j = (int)s.size()-1;
            while (i <= j && can) {
                if (s[i] == s[j] && s[i] == '?') {
                    if (frek[0] > frek[1]) {
                        s[i] = '0'; s[j] = '0';
                        if (i != j) frek[0] -= 2;
                        else frek[0]--;
                    } else if (frek[1] >= frek[0]) {
                        s[i] = '1'; s[j] = '1';
                        if (i!=j) frek[1]-=2;
                        else frek[1]--;
                    }
                }
                if (frek[0] < 0 || frek[1] < 0) {
                    can = false;
                }
                ++i; --j;
            }
            if (can) cout << s << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}
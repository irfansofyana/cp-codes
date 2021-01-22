#include <bits/stdc++.h>
using namespace std;

int n, k, b, xam;
int cnt[30][5];
char a[5005][5005];
int ans[30];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for (int t = 1; t <= n; ++t) {
        cout << t << '\n';
        cin >> k >> b;
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < 4; ++j) {
                cnt[i][j] = 0;
            }
        }
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < k; ++j) {
                cin >> a[i][j];
                cnt[a[i][j] - 'a'][2 * (2 * i >= b) + (2 * j >= k)]++;
            }
        }
        for (int i = 0; i < 26; ++i) {
            xam = 0;
            for (int j = 0; j < 4; ++j) {
                if (cnt[i][j] > xam) {
                    ans[i] = j + 1;
                    xam = cnt[i][j];
                }
            }
        }
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << a[i][j] << ans[a[i][j] - 'a'] << ' ';
            }
            cout << '\n';
        }
    }
}
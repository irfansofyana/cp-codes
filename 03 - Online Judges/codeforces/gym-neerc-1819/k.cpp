#include <bits/stdc++.h>
using namespace std;
 
int n, m, arr[5005], gem[5005], ans[5005];
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        gem[i] = gem[i-1];
        if (arr[i] < m) ++gem[i];
        ans[i] = -1e9;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (gem[i] - gem[j-1] <= (i - j)/2) {
                ans[i] = max(ans[i], ans[j-1] + 1);
            }
        }
    }
    cout << max(ans[n],0) << '\n';
}

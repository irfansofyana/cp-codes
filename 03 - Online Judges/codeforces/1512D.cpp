#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int t, n, randomIndex;
int arr[MAXN];
long long sum;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;

        sum = 0;
        randomIndex = -1;
        for (int i = 0; i < n + 2; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n + 2);
        for (int ix = 0; ix < n + 2; ++ix) {
            int mx = arr[(ix == n + 1 ? n : n + 1)];
            if (sum - arr[ix] == 2 * mx) {
                randomIndex = ix;
                break;
            }
        }
        if (randomIndex == -1) cout << -1 << '\n';
        else {
            int imx = (randomIndex == n + 1 ? n : n + 1);
            for (int i = 0; i < n + 2; ++i) {
                if (i != randomIndex && i != imx) {
                    cout << arr[i] << " ";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
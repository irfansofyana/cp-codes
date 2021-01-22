#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int n, arr[1005][1005];
int ans[1005];
LL tmp;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> arr[i][j];
        }
    }
    tmp = (1LL * arr[1][2] * arr[1][3]) / (arr[2][3]);
    ans[1] = (int)sqrt(tmp);
    for (int i = 2; i <= n; ++i){
        ans[i] = (arr[1][i] / ans[1]);
    }
    for (int i = 1; i <= n; ++i){
        cout << ans[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}
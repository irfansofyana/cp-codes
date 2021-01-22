#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, arr[MAXN], ans, x;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (i <= j){
        if (i == j) {
            ++ans;
            break;
        }
        if (arr[i] + arr[j] <= x){
            ++ans;
            ++i;
            --j;
        }else {
            ++ans;
            --j;
        }
    }
    cout << ans << '\n';
    return 0;
}
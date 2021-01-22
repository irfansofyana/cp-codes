#include <bits/stdc++.h>
using namespace std;

int n, arr[200005];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    int i = 0;
    while (i < n){
        ++ans;
        int j = i + 1;
        while (j < n && arr[j] == arr[i]){
            ++j;
        }
        i = j;
    }
    cout << ans << '\n';
    return 0;
}
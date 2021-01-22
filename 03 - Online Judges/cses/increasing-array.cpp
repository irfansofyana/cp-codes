#include <bits/stdc++.h>
using namespace std;

int n, arr[200005];
long long ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for (int i = 1; i < n; ++i){
        if (arr[i] < arr[i-1]) {
            ans += (long long)(arr[i-1] - arr[i]); 
            arr[i] = arr[i-1];
        }
    }
    cout << ans << '\n';
    return 0;
}
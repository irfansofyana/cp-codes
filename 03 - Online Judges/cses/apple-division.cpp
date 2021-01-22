#include <bits/stdc++.h>
using namespace std;

int n;
int arr[23];
long long sum, ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    
    sum = 0LL;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }

    ans = (long long)1e18;
    for (int i = 0; i < (1 << n); ++i){
        long long one = 0;
        for (int j = 0; j < n; ++j){
            if ((i&(1 << j)) > 0){
                one += arr[j];
            }
        }
        ans = min(ans, abs(sum-2*one));
    }

    cout << ans << '\n';
    return 0;
}
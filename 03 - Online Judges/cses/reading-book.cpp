#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int n;
LL sum, maks;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        sum += 1LL * x;
        maks = max(maks, (LL)x);
    }
    cout << max(sum, 2*maks) << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int t;
long long x, y, ans, maks;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> x >> y;
        maks = max(x, y);
        if (maks % 2 == 0){
            if (x == maks){
                ans = maks * maks - (y - 1);
            }else {
                ans = maks * maks - maks + 1 - (maks - x);
            }
        }else {
            if (y == maks) {
                ans = maks * maks - (x - 1);
            }else{
                ans = maks * maks - maks + 1 - (maks - y);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
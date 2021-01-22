#include <bits/stdc++.h>
using namespace std;

long long n, ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    while (n != 0){
        ans += n / 5;
        n /= 5;
    }
    cout << ans << '\n';
    return 0;
}
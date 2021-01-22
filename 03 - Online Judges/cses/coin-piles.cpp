#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((a + b) % 3 != 0) {
            cout << "NO\n";
        } else if (a < (a + b)/3 || b < (a + b)/3 ) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
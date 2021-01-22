#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (__gcd(a, b) == 1) cout << "Finite\n";
        else cout << "Infinite\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int q;
int a, b, n, s;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> q;
    while (q--){
        cin >> a >> b >> n >> s;
        //s = x*n + y        0 <= x <= a, 0 <= y <= b 
        //s-y = x*n 
        int ymod = s%n;
        if (ymod > b) cout << "NO\n";
        else {
            //nk + ymod <= b
            //nk <= b-ymod
            //k <= (b-ymod)/n
            int tmp = (b-ymod)/n;
            int bil = tmp * n + ymod;

            int tmp1 = (s-ymod)/n;
            int bil1 = tmp1 * n + ymod;

            bil = min(bil, bil1);
            if ((s-bil)/n > a) cout << "NO\n";
            else cout << "YES\n";
        }    
    }
    return 0;
}
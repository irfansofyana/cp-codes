#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    if (n == 1){
        cout << 1 << '\n';
    }
    else if (n <= 3) {
        cout << "NO SOLUTION\n";
    }else if (n == 4) {
        cout << "2 4 1 3\n";
    }else{
        for (int i = 1; i <= n; i+=2){
            if (i > 1) cout << ' ';
            cout << i;
        }
        for (int i = 2; i <= n; i+=2){
            cout << ' ' << i;
        }
        cout << '\n';
    }
    return 0;
}
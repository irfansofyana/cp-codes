#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int buka, tutup;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    if (n%2 == 1) cout << ":(\n";
    else {
        for (int i = 0; i < n; i++){
            if (s[i] == '(') buka++;
            else if (s[i] == ')') tutup++;
        }
        if (buka > n/2 || tutup > n/2) cout << ":(\n";
        else {
            int sum = 0;
            int harus = n/2 - buka;
            for (int i = 0; i < n; i++){
                if (s[i] == '(') sum++;
                else if (s[i] == ')') sum--;
                else {
                    if (harus > 0) {
                        s[i] = '(';
                        sum++;
                        harus--;
                    }else {
                        s[i] = ')';
                        sum--;
                    }
                }
                if (sum < 0 || (sum == 0 && i!=n-1)) {
                    cout << ":(\n";
                    return 0;
                } 
            }
            if (sum != 0) cout << ":(\n";
            else cout << s << '\n';
        }
    }
    return 0;
}
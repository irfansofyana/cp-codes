#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL comb[45][45];
LL n, k;

void isi(){
    comb[0][0] = 1;
    for (int i = 1; i <= 40; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i) comb[i][j] = 1;
            else comb[i][j] = comb[i-1][j] + comb[i-1][j-1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    isi();
    cin >> n >> k;
    string s = "";
    LL nol = 0;
    LL satu = 0;
    for (int i = 0; i < 2*n; i++){
        //hitung kalo 0 
        LL tmp = comb[2*n-(i+1)][n-nol-1];
        if (k > tmp) {
            s = s + '1';
            satu++;
            k -= tmp;
        }else {
            s = s + '0';
            nol++;
        }
    }
    cout << s << '\n';
    return 0;
}
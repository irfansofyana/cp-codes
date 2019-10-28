#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int q, n;
int arr[2][MAXN+2];
int dp[2][MAXN+2][4];

int cari(int row, int col, int prv){
    if (row == 1 && col == n) return 1;
    if (row == 0 && col == n) return 0;
    if (row > 1 || row < 0) return 0;
    if (dp[row][col][prv] != -1) return dp[row][col][prv];
    int &ret = dp[row][col][prv];
    //0 -> kiri
    //1 -> atas
    //2 -> bawah
    if (row == 0 && col == 0){
        if (arr[row][col] == 1 || arr[row][col] == 2){
            ret = cari(row, col+1, 0);
        }else {
            ret = cari(row+1, col, 1);
        }
    }else {
        if (prv == 0){
            if (arr[row][col] == 1 || arr[row][col] == 2){
                ret = cari(row, col+1, 0);
            }else {
                ret = (cari(row+1, col, 1) | cari(row-1, col, 2));
            }
        }else if (prv == 1){
            if (arr[row][col] == 1 || arr[row][col] == 2){
                ret = 0;
            }else {
                ret = cari(row, col+1, 0);
            }
        }else if (prv == 2){
            if (arr[row][col] == 1 || arr[row][col] == 2){
                ret = 0;
            }else {
                ret = (cari(row, col+1, 0));
            }
        }
    }
    return ret;
}

int main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> q;
    while (q--){
        cin >> n;
        for (int i = 0; i < 2; ++i){
            for (int j = 0; j < n; ++j){
                char c;
                cin >> c;
                arr[i][j] = (int)c-'0';
            }
        }
        for (int i = 0; i < 2; ++i){
            for (int k = 0; k < n; ++k){
                for (int j = 0; j < 4; ++j){
                    dp[i][k][j] = -1;
                }
            }
        }
        int ans = cari(0, 0, 0);
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}
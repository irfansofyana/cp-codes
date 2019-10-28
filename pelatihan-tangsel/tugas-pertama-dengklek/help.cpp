#include <bits/stdc++.h>
using namespace std;

int n, maks, ans;

int main(){
    for (int i = 1; i <= 1000; i++){
        int cnt = 0;
        for (int j = 1; j <= (int)sqrt(i); j++){
            if (i%j == 0){
                cnt++;
                int k = i / j;
                if (k != j) cnt++;
            }
        }
        if (cnt > maks){
            maks = cnt;
            ans = i;
        }
    }
    cout << ans << ' ' << maks << '\n';
}
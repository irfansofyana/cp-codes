#include <bits/stdc++.h>
#define pb push_back
using namespace std;

long long n, sum;
vector<long long> ans[2];

int main(){
    cin >> n;
    if ((n * (n + 1)) / 2 % 2 == 1) {
        cout << "NO\n";
    } else {
        sum = (n * (n + 1)) / 4;
        for (int i = n; i > 0; --i){
            if (sum >= i){
                sum -= i;
                ans[0].pb(i);
            }else {
                ans[1].pb(i);
            }
        }
        cout << "YES\n";
        for (int i = 0; i < 2; ++i){
            cout << ans[i].size() << '\n';
            for (int j = 0; j < ans[i].size(); ++j){
                cout << ans[i][j];
                cout << (j == (int)ans[i].size() - 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
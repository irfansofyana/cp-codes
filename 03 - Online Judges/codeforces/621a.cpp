#include <bits/stdc++.h>

using namespace std;

int n, bil, mini;
long long sum;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    sum = 0LL;
    mini = 1000000000;
    for (int i = 0; i < n; ++i){
        cin >> bil;
        sum += bil;
        if (bil % 2 == 1){
            mini = min(mini, bil);
        }
    }
    if (sum % 2 == 0) {
        cout << sum << '\n';
    }else {
        cout << sum - mini << '\n';
    }
    return 0;
}
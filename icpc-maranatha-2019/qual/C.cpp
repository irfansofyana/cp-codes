#include <bits/stdc++.h>
using namespace std;

long long NA;
int d1, d2, da;

long long f(long long N, int d) {
    long long ans;
    if (N >= d) {
        ans = f(N - (N / d), d);
        if (ans <= (N % d)) {
            ans += (N/d) * d;
        } else {
            ans -= N % d;
            long long x = (ans - 1) / (d - 1);
            ans = d * x + (ans - x * (d - 1)); 
        }
    } else if (N == 1) {
        ans = 1LL;
    } else {
        ans = f(N-1, d) + d;
    }
    return (N + ans - 1) % N + 1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> NA >> d1 >> d2;
    da = d1 + d2;
    cout << f(NA, da) << '\n';
}
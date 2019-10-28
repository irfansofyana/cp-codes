#include <bits/stdc++.h>
using namespace std;

long long n;
long long d1, d2;

long long ans(long long n, long long k) {
    if (n == 1)
        return 0;
    else if (k == 1)
        return n-1;
    else if (k > n)
        return (ans(n-1, k) + k) % n;
    long long cnt = n / k;
    long long res = ans(n - cnt, k);
    res -= n % k;
    if (res < 0){
        res += n;
    }
    else{
        res += res / (k - 1);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> d1 >> d2;
    cout << ans(n, d1+d2)+1 << '\n';
    return 0;
}
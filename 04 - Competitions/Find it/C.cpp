#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 1e6;
int T;

LL x, p, s, u;
vector<LL> primes;
bitset<MAXN+5> bs;

void sieve(){
    bs.set();
    bs[0] = false;
    bs[1] = false;
    for (LL i = 2; i <= MAXN; i++){
        if (bs[i]){
            primes.push_back(i);
            for (LL j = i * i ; j <= MAXN; j+=i){
                bs[j] = false;
            }
        }
    }
}

LL totient(LL x){
    LL res = x;
    int idx = 0;
    while (x > 1){
        if (x % primes[idx] == 0) {
            res = res - res/primes[idx];
            while (x%primes[idx]==0) x/=primes[idx];
        }
        if (x <= MAXN && bs[x]){
            res -= (res / x);
            x = 1;
        }
        idx++;
    }
    return res;
}

LL mul(LL a, LL b, LL c){
    return ((a%c) * (b%c))%c;
}

LL sqr(LL x, LL mod){
    return ((x%mod)*(x%mod))%mod;
}

LL power(LL a, LL b, LL c){
    if (b == 0) return 1;
    else if (b == 1) return a%c;
    LL tmp = sqr(power(a, b/2, c), c);
    if (b%2 == 0) return tmp;
    else return (tmp * (a%c))%c;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sieve();
    cin >> T;
    while (T--){
        cin >> x >> p >> s >> u;
        LL gcd = __gcd(s, x);
        if (s%gcd == 0 && x%gcd == 0 && u%gcd == 0){
            s /= gcd;
            x /= gcd;
            u /= gcd;
            LL inv = power(s, totient(x)-1, x);
            LL ans = mul(u, inv, x);
            // cout << ans << '\n';
            LL k = (p-ans)/x;
            if ((p-ans) < 0 || ans <= 0){
                cout << "TIDAK\n";
            }else {
                ans = ans + k*x;
                if (ans >= 1 && ans <= p) cout << "YA " << ans << '\n';
                else cout << "TIDAK\n";
            }
        }else cout << "TIDAK\n";
    }
    return 0;
}
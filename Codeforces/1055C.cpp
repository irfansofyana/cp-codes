#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL la, ra, ta, sa;
LL lb, rb, tb, sb;
LL ans, b1, b2;

//find p such that (x-p) % mod = y
LL findMin(LL x, LL mod, LL y){
    x %= mod;
    y %= mod;
    return (x-y+mod)%mod;
}

//find p such that (x+p) % mod = y
LL findMax(LL x, LL mod, LL y){
    x %= mod;
    y %= mod;
    return (y-x+mod) % mod;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> la >> ra >> ta;
    cin >> lb >> rb >> tb;
    sa = ra-la+1; 
    sb = rb-lb+1;
    if (ta == tb){
        ans = max(0LL, min(ra, rb)-max(la, lb)+1);
    }else if (__gcd(ta, tb) == 1){
        ans = min(ra-la+1, rb-lb+1);
    }else {
        LL gcd = __gcd(ta, tb);
        //1
        b1 = lb - findMin(lb, gcd, la);
        b2 = b1 + sa - 1;
        if (b1 >= 0 && b2 >= 0)
            ans = max(ans, min(sb, b2-lb+1));
        // cout << ans << '\n';
        //2
        b1 = lb + findMax(lb, gcd, la);
        b2 = b1 + sa - 1;
        if (b1 >= 0 && b2 >= 0)
            ans = max(ans, min(b2-b1+1, rb-b1+1));
        // cout << ans << endl;
        //3
        b1 = la - findMin(la, gcd, lb);
        b2 = b1 + sb - 1;
        if (b1 >= 0 && b2 >= 0)
            ans = max(ans, min(sa, b2-la+1));
        // cout << ans << endl;
        //4
        b1 = la + findMax(la, gcd, lb);
        b2 = b1 + sb - 1;
        if (b1 >= 0 && b2 >= 0)
            ans = max(ans, min(b2-b1+1, ra-b1+1));
        // cout << ans << endl;
    }
    cout << ans << '\n';
    return 0;
}
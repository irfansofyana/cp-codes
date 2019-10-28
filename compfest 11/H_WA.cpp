#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL R, C, N, pi, dig[10], tN, xa, xb, xc, ans, ansx, ansy, anst;
int a[] = {4, 2, 2, 2, 3, 2, 3, 2, 4, 3};
int b[] = {2, 0, 3, 3, 1, 3, 3, 1, 3, 3};
int c[] = {6, 3, 6, 6, 5, 6, 6, 4, 6, 6};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> R >> C >> N;
    if (N == 0) ++pi;
    tN = N;
    while (tN != 0) {
        dig[pi] = tN%10;
        tN /= 10; ++pi;
    }
    for (int i = 0; i < pi; ++i) {
        xa += a[dig[i]];
        xb += b[dig[i]];
        xc += c[dig[i]];
    }
    ans = -1;
    // dibawah yang gerak cuma x, y, sama t, sisanya udah fix
    // intinya maneh mau ngemaks nilai dari t*(xa*x+xb*y+xc*t) yang ga lebih dari N
    // konstrainnya bisa diliat : x, y, t >= 1
    // 2x + 3t <= C
    // (y + 2t) * pi + pi-1 <= R
    // sama yang jelas t*(xa*x+xb*y+xc*t) <= N
    // urang awalnya bruteforce, tapi gabisa, kompleksitasnya R*R*C
    
    // udah kebayang kan, urang ke B ya
    // oke coba di bongkar2
    for (int t = 1; t <= C; ++t) {
        LL bx = (C - 3*t) / 2;
        LL by = ((R - pi + 1) / pi) - 2*t;
        for (int x = 1; x <= bx; x++){
            LL tmp = t * xa * x + t * t * xc;
            // LL y = min(by, (N - tmp)/(t * xb));
            if (N-tmp <= 0) continue;
            LL y = min(by, (N-tmp)/(t * xb));
            LL val = t*(xa*x + xb * y + xc * t);
            if (val <= N && val > ans){
                ans = val;
                ansx = x;
                ansy = y;
                anst = t;
            }
        }          
    }
    if (ans > 0) {
        cout << ansy+2*anst << ' ' << 2*ansx+3*anst << ' ' << anst << '\n';
    } else {
        cout << -1 << '\n';
    }
}
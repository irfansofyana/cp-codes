#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
const double EPS = 1e-9;

int N, K;
int S[MAXN+5], D[MAXN+5];

double f(double t){
    double mini, maks;
    for (int i = 0; i < N; i++){
        double tmp = S[i] * t + D[i];
        if (i == 0){
            mini = tmp; maks = tmp;
        }else {
            if (tmp < mini) mini = tmp;
            if (tmp > maks) maks = tmp;
        }
    }
    return maks-mini;
}

void Solve(){
    double lo = 0.00;
    double hi = K*1.00;
    double ans = 1e18;
    for (int i = 0; i < 1000; i++){
        double le = lo + (hi - lo)/3;
        double ri = hi - (hi - lo)/3;
        double f1 = f(le);
        double f2 = f(ri);
        ans = min(ans, min(f1, f2));
        if (f1 < f2)
            hi = ri;
        else lo = le;
    }
    printf("%.6lf\n", ans);
}

int main(){
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++){
        scanf("%d %d", &S[i], &D[i]);
    }
    Solve();
	return 0;
}
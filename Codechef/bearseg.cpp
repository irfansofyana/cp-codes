#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 1e5;

LL P, arr[MAXN+5];
LL psum[MAXN+5];
multiset<LL> st;
map<LL,LL> mep;
int T, N;

int main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // cin >> T;
    scanf("%d", &T);
    while (T--){
        scanf("%d %lld", &N, &P);
        for (int i = 1; i <= N; i++){
            scanf("%lld", &arr[i]);
            if (arr[i] >= P) arr[i] %= P;
            psum[i] = psum[i-1] + arr[i];
            if (psum[i] >= P) psum[i] %= P;
        }
        LL ans = -1;
        LL nans = 0;
        st.clear();
        mep.clear();
        st.insert(psum[N]);
        mep[psum[N]]++;
        for (int i = N-1; i >= 0; i--){
            multiset<LL>::iterator lo = st.end();
            if (i == 0){
                lo--;
                LL x = *lo;
                if (x >= 0) {
                    LL tmp = x;
                    LL frek = mep[tmp];
                    if (tmp > ans){
                        ans = tmp;
                        nans = frek;
                    }else if (tmp == ans) nans += frek;
                }
            }else {
                lo--;
                LL x = *lo;
                if (x > psum[i]) {
                    LL tmp = (x - psum[i])%P;
                    LL frek = mep[x];
                    if (tmp > ans){
                        ans = tmp;
                        nans = frek;
                    }else if (tmp == ans) nans += frek;
                }

                lo = st.lower_bound(psum[i]);
                if (lo != st.begin()){
                    lo--;
                    LL x = *lo;
                    if (psum[i] > x) {
                        LL tmp = (x - psum[i] + P)%P;
                        LL frek = mep[x];
                        if (tmp > ans){
                            ans = tmp;
                            nans = frek;
                        }else if (tmp == ans) nans += frek;
                    }
                }
                else if (lo == st.begin()){
                    LL frek = mep[*lo];
                    if (ans == -1) {
                        ans = 0;
                        nans = frek;
                    } else if (ans == 0) nans += frek;
                }
                st.insert(psum[i]);
                mep[psum[i]]++;
            }
            // cout << i << ": "<< ans << " " << nans << "\n";
        }
        printf("%lld %lld\n", ans, nans);
    }
    return 0;
}
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const int MAXN = 1e5+5;

int n, x;
ii curr;
bool exist;
vii ans;
LL out[MAXN];


int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    OPTIMIZE
    cin >> n;
    exist = true;
    for (int i = 2; i <= n ; i+=2){
        cin >> x;
        if (!exist) continue;
        vii tmp;
        for (int j = 1; j <= (int)sqrt(x); j++){
            if (x%j == 0){
                int k = x / j;
                if ((k + j)%2 == 0){
                    int big = (k + j) / 2;
                    int small = k - big;
                    tmp.pb({big, small});
                }
            }
        }
        for (int j = 0; j < sz(tmp); j++){
            cerr << tmp[j].fi << " " << tmp[j].se << '\n';
        }
        cerr << '\n';
        if (i == 1){
            int j = sz(tmp) - 1;
            while (j >= 0 && tmp[j].se == 0) j--;
            if (j < 0) exist = false; 
            else {
                curr = tmp[j];
                ans.pb(curr);
            }
        }else {
            int lo = 0;
            int hi = sz(tmp)-1;
            int idx = -1;
            while (lo <= hi){
                int mid = (lo + hi) / 2;
                if (tmp[mid].se > curr.fi){
                    idx = mid;
                    lo = mid + 1;
                }else {
                    hi = mid - 1;
                }
            }
            if (idx == -1) exist = false;
            else {
                curr = tmp[idx];
                ans.pb(curr);
            }
        }
    }
    if (!exist) cout << "No\n";
    else {
        cout << "Yes\n";
        for (int i = 0; i < ans.size(); i++){
            if (i == 0) {
                out[1] = 1LL * ans[i].se * ans[i].se;
                out[2] = 1LL * (ans[i].fi - ans[i].se) * (ans[i].fi + ans[i].se);
            }else {
                out[2*i + 1] = 1LL * (ans[i].se - ans[i-1].fi) * (ans[i].se + ans[i-1].fi); 
                out[2*i + 2] = 1LL * (ans[i].fi - ans[i].se) * (ans[i].fi + ans[i].se);
            }
        }
        for (int i = 1; i <= n; i++){
            cout << out[i];
            cout << (i == n ? '\n' : ' ');
        }
    }
    return 0;
}
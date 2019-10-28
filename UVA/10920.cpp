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

LL n, x;
LL ansx, ansy;

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
    // OPTIMIZE
    while (cin >> n >> x){
    	if (n == 0 && x == 0) return 0;
    	LL tmp = (LL)sqrt(x);
    	if (tmp * tmp == x && tmp%2 == 1){
    		ansx = ansy = (n+1) / 2 + (tmp-1)/2;
    	}
    	else {
    		if (tmp * tmp == x) {
    			tmp++;
    		}else if (tmp % 2 == 0){
    			tmp++;
    		}else if (tmp % 2 == 1){
    			tmp+=2;
    		}
    		ansx = (n+1) / 2 + (tmp - 1) / 2;
    		ansy = ansx;
    		LL lebih = tmp * tmp - x;
    		LL sum = 0;
    		int idx = -1;
    		for (int i = 0; i < 4; i++){
    			if (i == 0 || i == 2) sum += tmp-2;
    			else sum += tmp;
    			if (sum >= lebih) {
    				idx = i;
    				break;
    			}
    		}
    		if (idx == 0){
    			ansx = (ansx - lebih);
    		}else if (idx == 1){
    			lebih -= (tmp-2);
    			ansx = (ansx - (tmp-1));
    			ansy = (ansy - (lebih-1));
    		}else if (idx == 2){
    			lebih = (lebih - (tmp-2) - tmp);
    			ansy = (ansy - (tmp-1));
    			ansx = (ansx - (tmp-1) + lebih);
    		}else {
    			lebih = (lebih - (tmp-2) - tmp - (tmp-2));
    			ansy = (ansy - (tmp-1) + lebih-1);
    		}
    	}
    	cout << "Line = " << ansx << ", " << "column = " << ansy << ".\n";
    }
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXQ = 2e4;

string s;
LL a, b, ans, l[MAXQ+3], r[MAXQ+3];
int q;
vector<pair<char,LL> > rev;
vector<char> res;
vector<LL> prefix;

bool isStop(LL even, LL odd){
	if (even == 0) 
		return true;
	else if (odd == 1)
		return true;
	else return false;
}

string convert(LL x){
	string res = "";
	while (x > 0){
		if (x%2 == 0) res = '0' + res;
		else res = '1' + res;
		x /= 2;
	}
	return res; 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	cin >> a >> b >> q;
	for (int i = 0; i < q; i++){
		cin >> l[i] >> r[i];
	}
	bool flag = true;
	while (!isStop(b, a) && flag){
		LL ta = a; 
		LL tb = b;
		if (a <= 0 || b < 0) {
			flag = false;
			break;
		}
		if (b >= a){
			LL k = b / a;
			b = (b - a * k);
			rev.push_back({'0', k});
		}
		else {
			LL k = (a/(b+1));
			a = (a - (b+1)*k);
			rev.push_back({'1', k});
		}
		if (ta == a && b == tb) flag = false;
	}
	if (!flag) cout << "TIDAK MUNGKIN\n";
	else {
		cout << "MUNGKIN\n";
		if (b == 0) {
			rev.push_back({'1', a});
		}else {
			rev.push_back({'0', b});
			rev.push_back({'1', 1});
		}
		reverse(rev.begin(), rev.end());
		LL cnt = 0LL;
		for (int i = 0; i < rev.size(); i++){
			cnt += rev[i].second;
			prefix.push_back(cnt);
		}
		for (int i = 0; i < q; i++){
			if (l[i] >= cnt || r[i] >= cnt) cout << "DI LUAR BATAS\n";
			else {
				LL lo = lower_bound(prefix.begin(), prefix.end(), l[i]+1) - prefix.begin();
				LL hi = lower_bound(prefix.begin(), prefix.end(), r[i]+1) - prefix.begin();
				// cout << "indeks " << lo << " " << hi << '\n';
				if (lo == hi) {
					for (LL j = l[i]; j <= r[i]; j++)
						cout << rev[lo].first;
					cout << '\n';
				}else {
					for (LL j = l[i]; j <= prefix[lo]-1; j++)
						cout << rev[lo].first;
					for (LL j = lo+1; j <= hi-1; j++){
						for (LL k = 0; k < rev[j].second; k++)
							cout << rev[j].first;
					}
					for (LL j = 0; j < rev[hi].second - (prefix[hi]-r[i]-1); j++)
						cout << rev[hi].first;
					cout << '\n';
				}
			}
		}
	}
	return 0;
}
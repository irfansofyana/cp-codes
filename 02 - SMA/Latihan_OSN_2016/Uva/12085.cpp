#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s1,s2;
ll n,m,i,j;
ll tc,frek;
vector<ll> A;

string ubah(ll n){
	stringstream ss;
	ss << n;
	return ss.str();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n,n > 0){
		A.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> m;
			A.push_back(m);
		}
		cout << "Case " << ++tc << ":\n";
		i = 0;
		while (i < n) {
			j = i+1; frek = 1;
			while (j < n && A[j]-A[j-1]==1) {
				j++; frek++;
			}
			if (frek==1) cout << '0' << A[i] << '\n';
			else {
				s1 = '0' + ubah(A[i]);
				s2 = '0' + ubah(A[j-1]);
				int _i;
				_i = 0; 
				while (_i < s1.size() && _i < s2.size()) {
					if (s1[_i]==s2[_i]) {
						_i++;
					}
					else break;
				}
				cout << s1 << "-" << s2.substr(_i,(int)s2.size()-_i) << '\n';
			}
			i = j;
		}
		cout << '\n';
	}
	return 0;
}
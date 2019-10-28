#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
string s,temp;
vector<ll> A;
ll _last;
map<ll,ll> bil;
map<ll,bool> udah;

ll nilai(string s){
	ll ret = 0;
	ll kali = 1;
	for (int z = (int)s.size()-1; z>=0 ; z--){
		ret += ((int)s[z]-'a'+1)*kali;
		kali *= (1<<5);
	} 
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin,s)){
		A.clear();
		_last = 0;
		i = s.find(" ",0);
		while (i >= 0 && i < s.size()){
			//string temp ;
			temp = s.substr(_last,i-_last);
			if (temp!="") A.push_back(nilai(temp));
			_last = i+1;
			i = s.find(" ", i + 1);
		}
		temp = s.substr(_last,(int)s.size()-_last);
		A.push_back(nilai(temp));
		sort(A.begin(),A.end());
		for (i = 0 ; i < A.size(); i++) cout << A[i] << " " ; cout << endl;
		bool cek = true;
		ll calon = A[0]; n = (ll)A.size();
		while (cek) {
			udah.clear(); bil.clear();
			bool bener = true;
			for (i = 0 ; i < A.size(); i++) {
				if (udah[calon/A[i]]) {
					ll smt = calon/A[i];
					calon = min((smt+1)*bil[smt],(smt+1)*A[i]);
					bener = false;
					break;
				}
				else {
					udah[calon/A[i]] = true;
					bil[calon/A[i]] = A[i];
				}
			}
			if (bener) {
				cout << s << '\n';
				cout << calon << '\n' << '\n';
				cek = false;
				break;
			}
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
string a,b;
vector<string> ans;
stack<char> antri;

void cari_solusi(string jaw,int nowa,int nowb,stack<char> cont){
	char tmp;
	string smt;
	if (jaw == "") {
		tmp = a[nowa];
		if (tmp == b[nowb]) {
			smt = jaw; smt = smt + 'i'; smt = smt + 'o';
			cari_solusi(smt, nowa + 1, nowb + 1, cont);
			cont.push(tmp);
			cari_solusi(jaw + 'i', nowa + 1, nowb, cont);
		}
		else {
			cont.push(tmp);
			cari_solusi(jaw + 'i', nowa + 1, nowb, cont);
		}
	}
	else {
		if (nowb == (int)b.size()) {
			ans.push_back(jaw);
		}
		else {
			if (!cont.empty()){
				tmp = cont.top();
				if (tmp == b[nowb]) {
					cont.pop();
					cari_solusi(jaw + 'o', nowa, nowb + 1, cont);
					cont.push(tmp);
				}
				if (nowa < (int)a.size()) {
					cont.push(a[nowa]);
					cari_solusi(jaw + 'i', nowa + 1, nowb,cont);
				}
			}
			else {
				if (nowa < (int)a.size()){
					cont.push(a[nowa]);
					cari_solusi(jaw + 'i', nowa + 1, nowb,cont);
				}
				else return;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> b){
		ans.clear();
		cari_solusi("",0,0,antri);
		sort(ans.begin(),ans.end());
		cout << "[\n";
		i = 0;
		while (i < ans.size()){
			for (j = 0 ; j < ans[i].size(); j++){
				cout << ans[i][j];
				cout << (j == (int)ans[i].size()-1 ? '\n' : ' ');
			}
			k = i+1;
			while (k < ans.size() && ans[k] == ans[k-1]){
				k++;
			}
			i = k;
		}
		cout << "]\n";
	}
	return 0;
}
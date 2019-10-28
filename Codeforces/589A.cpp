#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	string asli,palsu;
};

int n,m,i,j;
string s,smt;
vector<vector<string> > temp;
paket A[20005];

string ubah(string x){
	string res = "";
	for (int z = 0 ; z < x.size(); z++) {
		if (x[z]>='A' && x[z]<='Z') res = res+char((int)x[z]+32);
		else res = res+x[z];
	}
	return res;
}

bool comp(paket a,paket b){
	return a.palsu<b.palsu;
}

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		A[i].asli = s;
		int et = s.find('@');
		smt = s.substr(et+1,s.size()-1-(et+1)+1);
		if (ubah(smt)=="bmail.com") {
			smt = s.substr(0,et);
			string ress = "";
			for (j = 0 ; j < smt.size(); j++) {
				if (smt[j]=='+') break;
				else if (smt[j]>='A' && smt[j]<='Z') ress = ress+char((int)smt[j]+32);
				else if (smt[j]!='.') ress = ress+smt[j];
			}
			ress = ress+'@';
			A[i].palsu = ress+"bmail.com";
		}
		else {
			string ress = "";
			for (j = 0 ; j < s.size(); j++) {
				if (s[j]>='A' && s[j]<='Z') ress = ress+char((int)s[j]+32);
				else ress = ress+s[j];
			}
			A[i].palsu = ress;
		}
	}
	sort(A,A+n,comp);
	i = 0;
	int ans = -1;
	temp.assign(20005,vector<string>());
	while (i<n) {
		ans++;
		temp[ans].push_back(A[i].asli);
		j = i+1;
		while (A[j].palsu==A[i].palsu && j<n) {
			temp[ans].push_back(A[j].asli);
			j++;
		}
		i = j;
	}
	cout << ans+1 << '\n';
	for (i = 0 ; i <= ans ; i++) {
		cout << temp[i].size() ;
		for (j = 0 ; j < temp[i].size(); j++) {
			cout << " " << temp[i][j] ;
		}
		cout << '\n';
	}
	return 0;
}
#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int n,m,i,j;
int temp,sebelum,spasi;
vector<int> A,B;
string s1,s2;
map<int,int> fa;

int ubah(string k) {
	stringstream ss(k);
	int res;
	return ss>>res?res:0;
}

void pisah1(string l){
	string smt;
	spasi = l.find(" "); sebelum = 0;
	while (spasi>=0 && spasi<l.size()) {
		smt = l.substr(sebelum,spasi-sebelum);
		A.push_back(ubah(smt));
		sebelum = spasi+1;
		spasi = l.find(" ",spasi+1);
	}
	A.push_back(ubah(l.substr(sebelum,l.size()-sebelum)));
}


void pisah2(string l){
	string smt;
	spasi = l.find(" "); sebelum = 0;
	while (spasi>=0 && spasi<l.size()) {
		smt = l.substr(sebelum,spasi-sebelum);
		B.push_back(ubah(smt));
		sebelum = spasi+1;
		spasi = l.find(" ",spasi+1);
	}
	B.push_back(ubah(l.substr(sebelum,l.size()-sebelum)));
}

int main(){
	OPTIMASI
	while (getline(cin,s1)) {
		getline(cin,s2);
		A.clear(); B.clear();
		pisah1(s1); pisah2(s2);
		fa.clear(); 
		A.resize(unique(A.begin(),A.end())-A.begin()); B.resize(unique(B.begin(),B.end())-B.begin());
		for (i = 0 ; i < A.size(); i++) {
			fa[A[i]]++;
		}
		int cnt = 0;
		for (i = 0 ; i < B.size(); i++) {
			if (fa[B[i]]>0) {
				fa[B[i]]--;
				cnt++;
			}
		}
		if (A.size()==B.size()) {
			if (cnt==B.size()) cout << "A equals B" << endl;
			else if (cnt==0) cout << "A and B are disjoint" << endl;
			else cout << "I'm confused!" << endl;
		}
		else if (A.size()>B.size()) {
			if (cnt==B.size()) cout << "B is a proper subset of A" << endl;
			else if (cnt==0) cout << "A and B are disjoint" << endl;
			else cout << "I'm confused!" << endl;
		}
		else {
			if (cnt==A.size()) cout << "A is a proper subset of B" << endl;
			else if (cnt==0) cout << "A and B are disjoint" << endl;
			else cout << "I'm confused!" << endl;
		}
	}
	return 0;
}
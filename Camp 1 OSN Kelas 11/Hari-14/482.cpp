#include <bits/stdc++.h>
using namespace std;

vector<int> idx;
string s,temp,ans[100005];
int tc,n,i,j,spasi,sblm;
bool pertama;

int ubah(string s){
	stringstream ss(s);
	int res;
	return ss >> res?res:0;
}

int main(){
	cin.tie(0);
	cin >> tc;
	getchar();
	pertama = true;
	while (tc--) {
		if (pertama) {
			getline(cin,s);
			pertama = false;
		}
		getline(cin,s); idx.clear();
		spasi = s.find(" "); sblm = 0;
		while (spasi>=0 && spasi<s.size()) {
			temp = s.substr(sblm,spasi-sblm);
			n = ubah(temp);
			idx.push_back(n);
			sblm = spasi+1; spasi = s.find(" ",spasi+1);
		}
		n = ubah(s.substr(sblm,s.size()-sblm));
		idx.push_back(n);
		getline(cin,s);
		spasi = s.find(" "); sblm = 0; i = 0;
		while (spasi>=0 && spasi<s.size()) {
			temp = s.substr(sblm,spasi-sblm);
			ans[idx[i]] = temp;
			i++; sblm = spasi+1; spasi = s.find(" ",spasi+1);
		}
		ans[idx[i]] = s.substr(sblm,s.size()-sblm);
		i++;
		for (j = 1 ; j <= idx.size() ; j++) 
			cout << ans[j] << endl;
		if (tc!=0) {
			cout << endl;
			getline(cin,s);
		}
	}
	return 0;
}
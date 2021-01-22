#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,mini,maks;
bool used[10010],ans=false;
vector<int> prima;
string s;

string ubah_string(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int ubah_int(string s){
	stringstream ss(s);
	int result;
	return ss>>result?result:0;
}
void sieve(){
	for (i=2;i<=10000;i++){
		if (!used[i]) {
			j=i;
			while (i*j<=10000) {
				used[i*j]=true;
				j++;
			}
		}
	}
	for (i=2;i<=10000;i++) {
		if (!used[i]) prima.push_back(i);
	}
}

bool cekprima(int k){
	if (k<=1) return false;
	else {
		for (int z=2;z<=int(sqrt(k));z++){
			if (k%z==0) return false;
		}
		return true;
	}
}
int main(){
	memset(used,false,sizeof(false));
	cin >> m >> n;
	sieve();
	bool ditemukan=false;
	for (i=0;i<prima.size();i++){
		if (prima[i]>=m && !ditemukan) {
			mini=i;
			ditemukan=true;
		}
		if (prima[i]>=n) {
			maks=i-1;
			break;
		}
	}
	for (i=mini;i<=maks;i++){
		for (j=mini;j<=maks;j++){
			s=ubah_string(prima[i])+ubah_string(prima[j]);
			if (cekprima(ubah_int(s))){
				ans=true;
				cout<<prima[i]<<" "<<prima[j]<<endl;
			}
		}
	}
	if (!ans) cout<<"TIDAK ADA"<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll kurang,banyak,bilangan;
string s;
vector<char> operasi;
vector<ll> A;

ll ubah(string s){
	stringstream ss(s);
	ll k;
	return ss >> k ? k : 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	getline(cin,s);
	j = 0;
	while (j < s.size()){
		if (s[j]!='-' && s[j]!='+') j++;
		else {
			if (s[j]=='-') kurang++;
			operasi.push_back(s[j]);
			j++;
		}
	}
	//for (i = 0 ; i < operasi.size(); i++) cout << operasi[i] << " "; cout << '\n';
	//cout << ubah("1232") <<'\n';
	i = s.find('=');
	n = ubah(s.substr(i+2,(ll)s.size()-i-2));
	banyak = (ll)operasi.size()-kurang+1;
	ll temp;
	if (kurang!=0) {
		temp = (banyak-n)/kurang;
		if (max(temp,(ll)1)==1) temp = 1;
	}
	else temp = 0;
	n += temp*kurang;
	//cout << n << " " << banyak << " " << " " <<kurang << '\n';
	//cout << banyak << " " << n << '\n';
	for (i = 1 ; i <= banyak; i++) {
		A.push_back(n/banyak);
	}
	for (i = 0 ; i < n%banyak; i++)
		A[i]++;
	//for (i = 0 ; i < banyak; i++) cout << A[i] << " " ; cout << '\n';
	for (i = 0 ; i < banyak ; i++) {
		if (A[i] > (n-kurang*temp) || A[i] < 1) {
			cout << "Impossible\n";
			return 0;
		}
	}
	cout << "Possible\n";
	cout << A[0] << " ";
	j = 1;
	for (i = 0 ; i < operasi.size(); i++){
		cout << operasi[i] << " ";
		if (operasi[i]=='-') cout << temp << " ";
		else {
			cout << A[j] << " ";
			j++;
		}
	}
	cout << "= " << n-kurang*temp << '\n';
	return 0;
}
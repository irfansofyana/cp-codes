#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,i,j;
int t,ttaxi,tpizza,tgirl;
string s,ss;

struct paket{
	string nama;
	int taxi,pizza,girl;
};

vector<paket> arr;
paket tmp;

bool cek_taxi(string s){
	char ch;
	for (int z = 0 ; z < s.size(); z++) {
		if (z == 0) ch = s[z];
		else if (s[z] != ch) return false;
	}
	return true;
}

bool cek_pizza(string s){
	for (int z = 1 ; z < s.size(); z++) {
		int aa = (int)s[z]-'0';
		int bb = (int)s[z-1]-'0';		// bb > aa
		if (aa >= bb) return false;
	}
	return true;
}

int maxtaxi, maxpizza, maxgirl;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> s;
		tmp.nama = s;
		ttaxi = 0; tpizza = 0; tgirl = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			ss = "";
			for (j = 0 ; j < s.size(); j++) {
				if (s[j] != '-') ss = ss + s[j];
			}
			if (cek_taxi(ss)) ttaxi++;
			else if (cek_pizza(ss)) tpizza++;
			else tgirl++;
		}
		tmp.taxi = ttaxi; tmp.girl = tgirl; tmp.pizza = tpizza;
		maxtaxi = max(maxtaxi, ttaxi);
		maxpizza = max(maxpizza, tpizza);
		maxgirl = max(maxgirl, tgirl);
		arr.pb(tmp);
	}
	cout << "If you want to call a taxi, you should call:";
	int ada = 0;
	for (i = 0 ; i < arr.size(); i++) if (arr[i].taxi == maxtaxi) ada++;
	int udah = 0;
	for (i = 0 ; i < arr.size(); i++) {
		if (arr[i].taxi == maxtaxi) {
			udah++;
			cout << " " << arr[i].nama;
			cout << (udah == ada ? ".\n" : ",");
		}
	}
	cout << "If you want to order a pizza, you should call:";
	ada = 0;
	for (i = 0 ; i < arr.size(); i++) if (arr[i].pizza == maxpizza) ada++;
	udah = 0;
	for (i = 0 ; i < arr.size(); i++) {
		if (arr[i].pizza == maxpizza) {
			udah++;
			cout << " " << arr[i].nama;
			cout << (udah == ada ? ".\n" : ",");
		}
	}
	cout << "If you want to go to a cafe with a wonderful girl, you should call:";
	ada = 0;
	for (i = 0 ; i < arr.size(); i++) if (arr[i].girl == maxgirl) ada++;
	udah = 0;
	for (i = 0 ; i < arr.size(); i++) {
		if (arr[i].girl == maxgirl) {
			udah++;
			cout << " " << arr[i].nama;
			cout << (udah == ada ? ".\n" : ",");
		}
	}
	return 0;
}

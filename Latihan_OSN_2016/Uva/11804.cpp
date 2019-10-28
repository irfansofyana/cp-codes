#include <bits/stdc++.h>
using namespace std;

struct paket{
	string nama;
	int nyerang,tahan;
};

struct akhir{
	vector<string> attack,defend;
	int nnyerang,ntahan;
};

int t,tc,i,j,k,l;
paket A[15];
string s;
int ambil[10];
akhir arr[1005];
int idx;

void kombinasi(int pos,int bef){
	if (pos==5) {
		bool udah[10];
		memset(udah,false,sizeof udah);
		for (int z = 0 ; z < 5 ; z++) 
			udah[ambil[z]] = true;
		int nny = 0;
		vector<string> att;
		for (int z = 0 ; z < 5 ; z++) {
			nny += A[ambil[z]].nyerang;
			att.push_back(A[ambil[z]].nama);
		}
		int nd = 0;
		vector<string> deff;
		for (int z = 0 ; z < 10 ; z++) {
			if (!udah[z]) {
				nd += A[z].tahan;
				deff.push_back(A[z].nama);
			}
		}
		arr[idx].attack = att;
		arr[idx].defend = deff;
		arr[idx].nnyerang = nny;
		arr[idx].ntahan = nd;
		idx++;
	}
	else {
		for (int z = bef + 1 ; z < 10 - 5 + pos + 1 ; z++){
			ambil[pos] = z;
			kombinasi(pos+1,z);
		}
	}
}

bool comp(akhir a,akhir b){
	if (a.nnyerang == b.nnyerang) {
		if (a.ntahan == b.ntahan){
			vector<string> tempa,tempb;
			tempa = a.attack; tempb = b.attack;
			sort(tempa.begin(),tempa.end());
			sort(tempb.begin(),tempb.end());
			return tempa < tempb;
		}
		return a.ntahan > b.ntahan;
	}
	return a.nnyerang > b.nnyerang;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		for (i = 0 ; i < 10 ; i++) {
			int x,y;
			cin >> s >> x >> y;
			A[i].nama = s; A[i].nyerang = x; A[i].tahan = y;
		}
		idx = 0;
		kombinasi(0,-1);
		sort(arr,arr+idx,comp);
		sort(arr[0].attack.begin(),arr[0].attack.end());
		sort(arr[0].defend.begin(),arr[0].defend.end());
		cout << "Case " << ++tc << ":\n";
		cout << '(';
		for (i = 0 ; i < arr[0].attack.size(); i++){
			cout << arr[0].attack[i] ;
			if (i==(int)arr[0].attack.size()-1) {
				cout << ")\n";
			}
			else cout << ", ";
		}
		cout << '(';
		for (i = 0 ; i < arr[0].defend.size(); i++){
			cout << arr[0].defend[i] ;
			if (i==(int)arr[0].defend.size()-1) {
				cout << ")\n";
			}
			else cout << ", ";
		}
	}
	return 0;
}
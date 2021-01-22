#include <bits/stdc++.h>
using namespace std;
struct paket{
	string nama;
	int cewek,pizza,taxi,nomor;
};

int tc,n,i,j,m,t,selisih;
int a,b,c;
paket A[110];
string s,temp,asli[110];
vector<vector<int> > ans;

bool comp1(paket a,paket b){
	if (a.taxi==b.taxi) return a.nomor<b.nomor;
	return a.taxi>b.taxi;
}

bool comp2(paket a,paket b){
	if (a.pizza==b.pizza) return a.nomor<b.nomor;
	return a.pizza > b.pizza;
}

bool comp3(paket a,paket b){
	if (a.cewek==b.cewek) return a.nomor<b.nomor;
	return a.cewek > b.cewek;
}

int main(){
	cin.tie(0);
	cin >> n; t = 0;
	while (n--) {
		cin >> m >> s; asli[t] = s;
		A[t].nama = s; a = 0; b = 0; c = 0; //a buat taksi b buat pizza c buat cewek
		for (i = 0 ; i < m ; i++) {
			cin >> s;
			temp = ""; selisih = 0;
			bool taksi = true;
			temp = temp+s[0]; temp = temp+s[1]; temp = temp+s[3]; temp = temp+s[4]; temp = temp+s[6]; temp = temp+s[7];
			//cout << temp << endl;
			for (j = 1 ; j < temp.size(); j++) {
				if ((temp[j]-'0')-(temp[j-1]-'0')!=0) taksi = false;
			}
			if (taksi) a++;
			else {
				taksi = true;
				for (j = 1 ; j < temp.size(); j++) {
					if ((temp[j]-'0')-(temp[j-1]-'0')>=0) taksi = false; 
				}
				if (taksi) b++;
				else c++;
			}
		}
		//cout << a << " " << b << " " << c << endl;
		A[t].taxi = a; A[t].pizza = b; A[t].cewek = c; A[t].nomor = t; 
		t++;
	}
	ans.assign(100,vector<int> ());
	sort(A,A+t,comp1); ans[0].push_back(A[0].nomor);
	j = 1;
	while (j < t) {
		if (A[j].taxi==A[j-1].taxi) {
			ans[0].push_back(A[j].nomor);
		}
		else break;
		j++;
	}
	sort(A,A+t,comp2); ans[1].push_back(A[0].nomor);
	j = 1;
	while (j < t ) {
		if (A[j].pizza == A[j-1].pizza) {
			ans[1].push_back(A[j].nomor);
		}
		else break;
		j++;
	}
	sort(A,A+t,comp3); ans[2].push_back(A[0].nomor);
	j = 1;
	while (j < t) {
		if (A[j].cewek==A[j-1].cewek) {
			ans[2].push_back(A[j].nomor);
		}
		else break;
		j++;
	}
	/*for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < ans[i].size(); j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}*/
	cout << "If you want to call a taxi, you should call: " ;
	for (i = 0 ; i < ans[0].size(); i++) {
		if (i!=ans[0].size()-1) cout << asli[ans[0][i]] << ", ";
		else cout << asli[ans[0][i]] << "." << endl;
	}
	cout << "If you want to order a pizza, you should call: ";
	for (i = 0 ; i < ans[1].size(); i++) {
		if (i!=ans[1].size()-1) cout << asli[ans[1][i]] << ", ";
		else cout << asli[ans[1][i]] << "." << endl;
	}
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for (i = 0 ; i < ans[2].size(); i++) {
		if (i!=ans[2].size()-1) cout << asli[ans[2][i]] << ", ";
		else cout << asli[ans[2][i]] << "." << endl;
	}
	return 0;
}
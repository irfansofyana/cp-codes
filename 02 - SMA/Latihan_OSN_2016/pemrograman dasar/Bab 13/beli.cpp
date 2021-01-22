#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;

struct paket{
	int berat,total;
	double satu;
};

paket A[1005];

bool comp(paket a,paket b){
	return a.satu > b.satu;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		A[i].berat = x;
	}
	for (i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		A[i].total = x;
		A[i].satu = (double)A[i].total/A[i].berat;
	}
	sort(A,A+n,comp);
	/*for (i = 0 ; i < n ; i++) {
		cout << A[i].total << " " << A[i].berat << " " << A[i].satu << '\n';
	}*/
	double ans = 0;
	for (i = 0 ; i < n && m > 0 ; i++) {
		ans += A[i].satu*(min(m,A[i].berat));
		m -= min(m,A[i].berat);
	}
	cout << fixed << showpoint << setprecision(5);
	cout << ans << '\n';
	return 0;
}
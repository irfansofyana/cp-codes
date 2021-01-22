#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;


struct paket{
	int idx,skor;
};
const int NMAKS=1e6;

int n,m,a,b,c,i,j;
paket A[NMAKS+5],B[NMAKS+5],C[NMAKS+5];
int ans1,ans2,ans3;

bool comp(paket a,paket b){
	return a.skor>b.skor;
}

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i<n; i++) {
		cin >> a >> b >> c;
		A[i].skor = a; A[i].idx = i; 
		B[i].skor = b; B[i].idx = i;
		C[i].skor = c; C[i].idx = i;
	}
	cin >> a >> b >> c;
	sort(A,A+n,comp);
	sort(B,B+n,comp);
	sort(C,C+n,comp);
	ans1 = A[a-1].skor;
	j = -1;
	//for (i = 0 ; i < n; i++) {
		//cout << B[i].skor << " " << B[i].idx << '\n';
	//}
	for (i = 0 ; i < n ; i++) {
		if (B[i].idx!=A[a-1].idx) j++;
		if (j==b-1) {
			ans2 = B[i].skor;
			j = B[i].idx;
			break;
		}
	}
	int x = -1;
	for (i = 0 ; i < n ; i++) {
		if (C[i].idx!=j && C[i].idx!=A[a-1].idx) x++;
		if (x==c-1) {
			ans3 = C[i].skor;
			break;
		}
	}
	cout << ans1 << " " << ans2 << " " << ans3 << '\n';
	return 0;
}
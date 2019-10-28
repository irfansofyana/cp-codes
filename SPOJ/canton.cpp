#include <bits/stdc++.h>
#define mp make_pair
using namespace std;


int t,n,i,j;
pair<int,int> A[10000005];
int px,py,idx;

void isi(){
	idx = 1;  px = 1; py = 1; j = 1;
	A[idx] = mp(px,py);
	for (i = 2 ; i<= 10000000; i++) {
		if (i-1==(j*(j+1))/2) {
			if (j%2==1) {py++;}
			else {px++;}
			j++;
		}
		else {
			if (j%2==0) {px++; py--;}
			else {px--; py++;}
		}
		A[i] = mp(px,py);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "TERM " << n << " IS " << A[n].first << '/' << A[n].second << '\n';
	}
	return 0;
}
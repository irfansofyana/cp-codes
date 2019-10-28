#include <bits/stdc++.h>
using namespace std;

int n,i,j,k1,k2,sum;
int A[2005];
int ans;

int bs(int awal,int akhir,int x,int res){
	int tengah = (awal+akhir)/2;
	if (awal>akhir) return res;
	else if (A[tengah]>x && tengah<=res) return bs(awal,tengah-1,x,tengah);
	else if (A[tengah] <= x ) return bs(tengah+1,akhir,x,res);
}

int main(){
	cin.tie(0);
	while (cin >> n && n!=0){
		ans = 0;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);
		for (i = 0 ; i < n ; i++) {
			for (j = i+1 ; j < n ; j++) {
				sum = A[i]+A[j];
				if (sum < A[n-1]) ans += n-1-(bs(0,n-1,sum,n-1))+1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
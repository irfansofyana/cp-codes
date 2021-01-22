#include <bits/stdc++.h>
using namespace std;

int n,m,x,k,i,j;
vector<int> A,B;
int maks,smt,temp,depan,belakang;
bool masuk;

int main(){
	cin.tie(0);
	cin >> n >> k >> x;
	for (i = 0 ; i < n ; i++) {
		cin >> smt;
		A.push_back(smt);
		B.push_back(smt);
	}
	for (i = 1 ; i<=n-1 ; i++) {
		j = i-1; temp = 1;
		A = B;
		while (A[j]==x && j>=0) {
			temp++;
			j--;
		}
		depan = j+1;
		j = i;
		while (A[j]==x && j<A.size()) {
			temp++;
			j++;
		}
		belakang = j-1;
		if (temp>=3) {
			A.erase(A.begin()+depan,A.begin()+depan+belakang-depan+1);
		}
		
		while (1==1) {
			j = 0 ;
			masuk = false;
			while (j<A.size()) {
				k = j+1; smt = 1;
				while (A[k]==A[j] && k<A.size()) {
					smt++;
					k++;
				}
				if (smt>=3) {
					A.erase(A.begin()+j,A.begin()+j+k-1-j+1);
					masuk = true;
				}
				j = k;
			}
			if (!masuk) break;
		}
		maks = max(maks,n-(int)A.size());
	}
	cout << maks << endl;
	return 0;
}
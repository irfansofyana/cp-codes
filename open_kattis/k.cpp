#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
vector<int> A;

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> m;
		A.clear();
		for (i = 0 ; i < m ; i++){
			int x;
			cin >> x;
			A.push_back(x);
		}
		int beda=0;
		bool cek = true;
		for (i = 1 ; i < A.size(); i++){
			if (i==1) {
				beda = A[i]-A[i-1]; 
			}
			else {
				if (A[i]-A[i-1]!=beda) {cek = false; break;}
			}
		}
		if (cek) cout << "arithmetic\n";
		else {
			sort(A.begin(),A.end());	
			int beda=0;
			bool cek = true;
			for (i = 1 ; i < A.size(); i++){
				if (i==1) {
					beda = A[i]-A[i-1]; 
				}
				else {
					if (A[i]-A[i-1]!=beda) {cek = false; break;}
				}	
			}
			if (cek) cout << "permuted arithmetic\n";
			else {		
				sort(A.begin(),A.end(),comp);	
				int beda=0;
				bool cek = true;
				for (i = 1 ; i < A.size(); i++){
					if (i==1) {
						beda = A[i]-A[i-1]; 
					}
					else {
						if (A[i]-A[i-1]!=beda) {cek = false; break;}
					}		
				}
				if (cek) cout << "permuted arithmetic\n";
				else cout << "non-arithmetic\n";
			}
		}
	}
}
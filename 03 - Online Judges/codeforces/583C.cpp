#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[505];
vector<int> ans;

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (i = 0 ; i < n*n ;i++) cin >> A[i];
	sort(A,A+n*n,comp);
	i = 0 ; int isi = 0;
	//for (i = 0 ; i < n*n; i++) cout << A[i] << '\n';
	//cout << '\n';
	while (i<n*n) {
		j = i+1; int frek = 1;
		while (A[j]==A[i] && j<n*n) {
			j++; frek++;
		}
		if (ans.size()<n) ans.push_back(A[i]);
		i = j;
	}
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i] ;
		cout << (i==ans.size()-1?'\n':' '); 
	}
	return 0;
}
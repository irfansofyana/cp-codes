#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m,i,j;
vector<int> A;
bool bilangan[1005];


void ini(){
	memset(bilangan,true,sizeof bilangan);
	for (i = 2 ; i<=1000 ; i++) {
		if (bilangan[i]){
			j = i;
			while (i*j<=1000){
				bilangan[i*j] = false;
				j++;
			}
		}
	}
	for (i = 1 ; i <= 1000 ; i++) {
		if (i!=1 && !bilangan[i]){
			for (j = 2; j<=i-1; j++) {
				if (i%j==0 && !bilangan[j]) break;
			}
			if (j==i) A.push_back(i);
		}
	}
}

int main(){
	OPTIMASI
	ini();
	cin >> t; int tc=0;
	//for (i = 0 ; i < A.size(); i++) cout << A[i] << '\n';
	while (t--) {
		cin >> n >> m;
		j = 0;
		for (i = 0 ; i < A.size(); i++) {
			if (n<=A[i] && A[i]<=m) j++;
		}
		cout << j << '\n';
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long n,i,j,jum,temp;
long long k,s,ukuran;
long long A[10000];
vector<long long> ans;

int main(){
	cin.tie(0);
	cin >> s >> k;
	A[0] = 1; A[1] = 1;
	i = 2;
	for (;;i++) {
		for (j=1;j<=k;j++) {
			temp = i-j;
			A[i]+=A[temp];
			if (temp<0) break;
		}
		if (A[i]>s) break;
 	}
 	while (s>0) {
 		if (s>=A[i]) {
 			s-=A[i];
 			ans.push_back(A[i]);
 		}
 		i--;
 	}
 	if (ans.size()==1) {
 		cout << ans.size()+1 << endl;
 		cout << 0 << " ";
 	}
 	else cout << ans.size() << endl;
	for (i=0;i<ans.size();i++) {
		if (i==ans.size()-1) cout << ans[i] << endl;
		else cout << ans[i] << " "; 
	}
	return 0;
}

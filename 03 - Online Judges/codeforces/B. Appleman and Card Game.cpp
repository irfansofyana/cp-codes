#include <bits/stdc++.h>
using namespace std;
struct paket{
	char huruf;
	long long frek;
};

long long n,k,i,ans;
paket A[100005];
char s;
long long alfa[100005];

bool comp(paket a,paket b){
	return a.frek>b.frek;
}
int main(){
	cin >> n >> k;
	for (i=0;i<n;i++){
		cin >> s;	
		alfa[s-'A']++;	// huruf A==0	
	}
	for (i=0;i<26;i++) {
		A[i].huruf = char(i+'A');
		A[i].frek = alfa[i];
	}
	sort(A,A+26,comp);
	i = 0;
	while (k>0) {
		if (A[i].frek<=k) {
			k-=A[i].frek;
			ans+=A[i].frek*A[i].frek;
		}
		else if (A[i].frek>k){
			ans+=k*k;
			k = 0;
		}
		i++;
	}
	cout << ans << endl;
	return 0;
}

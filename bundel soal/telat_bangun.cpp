#include <bits/stdc++.h>
using namespace std;
struct paket{
	int guna;
	int nomor;
};
int t,n,k;
int i,j,sebelumnya;
bool ans;
paket A[10005];

bool comp(paket a,paket b){
	if (a.guna==b.guna) return a.nomor<b.nomor;
	return a.guna<b.guna;
}

int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&k);
		for (i=0;i<n*k;i++) {
			int x;
			scanf("%d",&x);
			A[i].guna = x;
			A[i].nomor = i+1;
		}
		sort(A,A+n*k,comp);
		//for (i=0;i<n*k;i++)
		//	printf("%d %d\n",A[i].guna,A[i].nomor);
		for (i=0;i<n;i++) {
			j = i+k;
			ans = true;
			sebelumnya = A[i].nomor;
			while (j<n*k) {
				if (A[j].nomor<sebelumnya) {
					ans = false;
					break;
				}
				else {
					sebelumnya = A[j].nomor;
					j+=k;
				}
			}
			if (!ans) break;
		} 
		puts(ans==true?"1":"0");
	}
	return 0;
}

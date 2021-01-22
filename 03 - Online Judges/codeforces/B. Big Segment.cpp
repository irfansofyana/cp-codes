#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nomor,depan,belakang;
};
int n,i,j;
int x,y;
paket A[100005];
int ans;
bool nemu;

bool comp(paket a,paket b) {
	if (a.belakang==b.belakang) return a.depan<b.depan;
	return a.belakang>b.belakang;
}

int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d %d",&x,&y);
		A[i].depan = x;
		A[i].nomor = i+1;
		A[i].belakang = y;
	}
	sort(A,A+n,comp);
	ans = -1;
	for (i=0;i<n-1;i++) {
		nemu = true;
		for (j=0;j<n;j++) {
			if (!(A[j].depan>=A[i].depan && A[j].belakang<=A[i].belakang)) {
				nemu = false;
				break;
			}
		}
		if (nemu) {
			ans = A[i].nomor;
			break;
		}
	}
	if (n==1) printf("%d\n",1);
	else printf("%d\n",ans);
}

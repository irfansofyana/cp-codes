#include <bits/stdc++.h>
using namespace std;

struct paket{
	long long nilai;
	int pos;
};
int n,i,t;
paket A[8010];
long long temp,y;

bool comp(paket a,paket b){
	return (a.nilai<b.nilai);
}


int binary_search(int a,int b,long long c,int d){
	int tengah = (a+b)/2;
	if (a>b) return -1;
	else if (A[tengah].nilai<c) return binary_search(tengah+1,b,c,d);
	else if (A[tengah].nilai>c) return binary_search(a,tengah-1,c,d);
	else if (A[tengah].nilai==c) {
		if (A[tengah].pos!=d) {
			return 1;
		}
		else {
			if (A[tengah-1].nilai==A[tengah].nilai || A[tengah+1].nilai==A[tengah].nilai) {
				return 1;
			}
			else return -1;
		}
	}
}
int main(){
	scanf("%d %d",&n,&t);
	for (i=0;i<n;i++) {
		scanf("%lld",&temp);
		A[i].nilai = temp;
	}
	sort(A,A+n,comp);
	for (i=0;i<n;i++) 
		A[i].pos = i+1;
	while(t--) {
		bool jaw = false;
		scanf("%lld",&y);
		for (i=0;i<n;i++) {
			if (A[i].nilai>(y/2) || jaw) break;
			else {
				if (binary_search(0,n-1,y-A[i].nilai,A[i].pos)==1) jaw = true;
			}
		}
		if (jaw) puts("YA");
		else puts("TIDAK");
	}
	return 0;
}

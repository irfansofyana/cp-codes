#include <bits/stdc++.h>
using namespace std;
struct paket{
	int tempat,banyak;
};

int n,i,j,ans;
paket pos[110],neg[110];
int idx,idy;

bool asc(paket a,paket b){
	return a.tempat<b.tempat;
}

bool desc(paket a,paket b) {
	return a.tempat>b.tempat;
}

int main() {
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) {
		int x,y;
		scanf("%d %d", &x, &y);
		if (x>0) {
			pos[idx].tempat = x; pos[idx].banyak = y;
			idx++;
		}
		else {
			neg[idy].tempat = x; neg[idy].banyak = y;
			idy++;
		}
	}
	sort(pos,pos+idx,asc); sort(neg,neg+idy,desc);
	if (idx==idy) {
		for (i=0;i<idx;i++) ans+=pos[i].banyak;
		for (i=0;i<idy;i++) ans+=neg[i].banyak;
	}
	else if (idx>idy) {
		for (i=0;i<idy+1;i++) ans+=pos[i].banyak;
		for (i=0;i<idy;i++) ans+=neg[i].banyak;
	}
	else {
		for (i=0;i<idx;i++) ans+=pos[i].banyak;
		for (i=0;i<idx+1;i++) ans+=neg[i].banyak;
	}
	printf("%d\n", ans);
	return 0;
}

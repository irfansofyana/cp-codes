#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nilai,nomor;
};

int n,i,j,a,b;
int x,y,d;
paket butuh[100005];
vector<int> ans;

bool comp(paket a,paket b){
	return a.nilai<b.nilai;
}

int main(){
	scanf("%d %d", &n, &d);
	scanf("%d %d", &a, &b);
	for (i = 0 ; i < n ; i++) {
		scanf("%d %d", &x, &y);
		butuh[i].nilai = x*a+y*b;
		butuh[i].nomor = i+1;
	}
	sort(butuh,butuh+n,comp);
	for (i= 0 ; i < n ; i++) {
		if (butuh[i].nilai<=d) {
			ans.push_back(butuh[i].nomor);
			d-= butuh[i].nilai;
		}	
		else break;
	}
	printf("%d\n", ans.size());
	for (i = 0 ; i < ans.size(); i++) {
		if (i==0) printf("%d", ans[i]);
		else printf(" %d", ans[i]);
	}
	printf("\n");
	return 0;
}
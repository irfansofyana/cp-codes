#include <bits/stdc++.h>
using namespace std;

long long n,i,j,piv;
long long arr[100];
vector<long long> vi;
void isiarr(){
	arr[0]=1;
	for (i=1;i<=30;i++){
		arr[i]=3*arr[i-1];
	}
}
int main(){
	isiarr();
	scanf("%lld",&n);
	for (i=0;i<=40;i++){
		if (arr[i]>n) break;
	}
	piv=i-1;
//	printf("%lld\n",piv);
	while (n!=0) {
		for (i=0;i<n/arr[piv];i++) vi.push_back(arr[piv]);
		n-=((n/arr[piv])*arr[piv]);
		piv--;
	}
	sort(vi.begin(),vi.end());
	printf("%lld\n",vi.size());
	for (i=0;i<vi.size();i++) {
		if (i==0) printf("%lld",vi[i]);
		else printf(" %lld",vi[i]);
	}
	printf("\n");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,depan,belakang;
int k,maks,mini;
int jawab[1000010];
int kunci[1000010];
int A[1000010],B[1000010];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m; depan=1;
	for (i=1;i<=m;i++){
		cin>>A[i];
		for (j=1;j<=A[i];j++){
			jawab[depan]=i;
			depan++;
		}
	}
	belakang=n;
	for (i=1;i<=m;i++){
		cin>>B[i];
		for (j=1;j<=B[i];j++){
			kunci[belakang]=i;
			belakang--;
		}
	}
	for (i=1;i<=n;i++){
		if (jawab[i]==kunci[i]) mini++;
		maks+=min(A[i],B[i]);
	}
	cout<<mini<<'-'<<maks<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n,i,j,banyak,st,kurang,lebih;
int A[10000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>A[i];
	}
	for (i=1;i<=n;i++){
		st=A[i]; j=i-1; kurang=0; lebih=0;
		while (j>=1 && A[j]<st) {
			kurang++;
			j--;
		}
		j=i+1;
		while (j<=n && A[j]<st){
			lebih++;
			j++; 
		}
		cout<<(lebih+1)*(kurang+1)<<endl;
	}
	return 0;
}

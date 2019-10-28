#include <bits/stdc++.h>
using namespace std;

int n,t,i,j;
int A[100005];
int ans;

int binary_search(int depan,int ujung,int sebelum,int target){
	int mid=(depan+ujung)/2;
	if (depan>ujung) return sebelum;
	else if (A[mid]==target) return mid;
	else if (A[mid]>target) return binary_search(depan,mid-1,sebelum,target);
	else if (A[mid]<target) {
		if (mid>sebelum) sebelum = mid;
		return binary_search(mid+1,ujung,sebelum,target);
	}
}

int main(){
	scanf("%d %d", &n, &t);
	for (i=1;i<=n;i++) {
		scanf("%d", &A[i]);
		A[i]+=A[i-1];
	}
	ans = 0;
	for (i=1;i<=n;i++) {
		ans = max(ans,binary_search(1,n,-1,t+A[i-1])-i+1);
	}
	printf("%d\n", ans);
	return 0;
}

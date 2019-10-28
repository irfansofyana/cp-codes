#include <bits/stdc++.h>
using namespace std;

int A[100000];
int n,i,j,temp;

bool binary_search(int depan,int belakang,int bil){
	int mid = (depan+belakang)/2;
	if (depan>belakang) return false;
	else if (A[mid]==bil) return true;
	else if (A[mid]>bil) return binary_search(depan,mid-1,bil);
	else if (A[mid]<bil) return binary_search(mid+1,belakang,bil);
}

int main(){
	cin.tie(0);
	for (i=1;i<=100000;i++) {
		if (((i*(i+1))/2)>1000000000) break;
		else A[i] = (i*(i+1))/2;
	}	
	cin >> n;
	for (i=1;i<=100000;i++) {
		temp = n-A[i];
		if (temp<A[i]) break;
		else if (temp>=A[i]) {
			if (binary_search(1,44720,temp)) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[105], frek[105];

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		frek[arr[i]]++;
	}
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 1; i <= 100; i++){
		if (frek[i] == 1) cnt1++;
		else if (frek[i] > 2) {
			cnt2 = i;
		}
	}
	if (cnt1%2 == 1 && cnt2 == 0) printf("NO\n");
	else if (cnt1 % 2 == 1){
		printf("YES\n");
		bool flag = false;
		int udh = 0;
		for (int i = 0; i < n; i++){
			if (frek[arr[i]] == 1 && udh != cnt1/2){
				printf("A");
				udh++;
			}
			else if (frek[arr[i]] == 1){
				printf("B");
			}else {
				if (arr[i] == cnt2 && !flag){
					flag = true;
					printf("A");
				}else if (arr[i] == cnt2) 
					printf("B");
				else printf("A");
			}
		}
		printf("\n");
	}else {
		printf("YES\n");
		int udh = 0;
		for (int i = 0; i < n; i++){
			if (frek[arr[i]] == 1 && udh != cnt1/2){
				printf("A");
				udh++;
			}
			else if (frek[arr[i]] == 1) printf("B");
			else printf("A");
		}
		printf("\n");
	}
	return 0;
}
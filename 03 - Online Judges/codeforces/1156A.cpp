#include <bits/stdc++.h>
using namespace std;

int n, ans;
int arr[105];

int process(int a, int b){
	if (a == 1 && b == 2) return 3;
	else if (a == 1 && b == 3) return 4;
	else if (a == 2 && b == 1) return 3;
	else if (a == 2 && b == 3) return -1;
	else if (a == 3 && b == 1) return 4;
	else return -1;
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i < n; i++){
		int x = process(arr[i-1], arr[i]);
		if (x == -1){
			printf("Infinite\n");
			return 0;
		}
		ans += x;
		if (arr[i-1] == 3 && arr[i] == 1 && i+1 < n && arr[i+1] == 2) ans--;	
	}
	printf("Finite\n");
	printf("%d\n", ans);
	return 0;
}
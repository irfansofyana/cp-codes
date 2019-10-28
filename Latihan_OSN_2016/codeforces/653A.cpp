#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int arr[55];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (i = 0 ; i < n-2 ; i++){
		for (j = i+1 ; j < n-1; j++) {
			for (k = j+1; k < n; k++) {
				int temp[3];
				temp[0] = arr[i];
				temp[1] = arr[j];
				temp[2] = arr[k];
				sort(temp,temp+3);
				if (temp[0]!=temp[1] && temp[1]!=temp[2] && temp[0]!=temp[2]) {
					if (temp[2]-temp[0] <= 2) {
						puts("YES");
						return 0;
					}
				}
			}
		}
	}
	puts("NO");
	return 0;
}
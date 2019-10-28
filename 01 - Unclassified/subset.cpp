#include <bits/stdc++.h>
using namespace std;

int n;
int arr[10];

int main(){
	cin >> n;
	for (int i = 0; i < n; i++) arr[i] = i + 1;
	for (int i = 1; i < (1 << n); i++) {
		for (int j = 0 ; j < n; j++) {
			if ((i & (1 << j)) > 0) 
				cout << arr[j] << " ";
		} cout << '\n';
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int arr[15];
int N;

int main(){
	cin >> N;
	for (int i = 0; i < N; i++)
		arr[i] = i + 1;

	do {	
		for (int i = 0 ; i < N; i++) {
			cout << arr[i] << " " ;
		} cout << '\n';
	}while (next_permutation(arr, arr + N));
}
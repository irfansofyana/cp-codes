#include <bits/stdc++.h>
using namespace std;

int arr[6], n;

int main(){
	cin >> n;
	for (int i = 0 ; i < n ; i++)
		arr[i] = i + 1;
	do{
		for (int i = 0 ; i < n ; i++) 
			cout << arr[i] << " ";
		cout << '\n';
	}while (next_permutation(arr, arr + n));	
	return 0;
}
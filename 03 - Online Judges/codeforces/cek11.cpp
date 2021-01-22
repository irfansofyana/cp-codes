#include <bits/stdc++.h>
using namespace std;


int n,i,j;
string arr[1005];

bool comp(string a,string b){
	return a < b;
}

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+n,comp);
	for (i = 0 ; i < n ; i++) {
		cout << arr[i] << '\n';
	}
}

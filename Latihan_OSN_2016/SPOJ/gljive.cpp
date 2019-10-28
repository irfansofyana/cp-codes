#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
int n,m,i,j;
int arr[15];
vector<pi> A;

bool comp(pi a,pi b){
	if (a.first==b.first) return a.second > b.second;
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0 ; i < 10 ; i++) 
		cin >> arr[i];
	for (i = 1 ; i < (1<<10); i++){
		int sum = 0;
		for (j = 0 ; j < 10 ; j++) {
			if ((i&(1<<j)) > 0) {
				sum += arr[j];
			}
		}
		A.push_back(make_pair(abs(sum-100),sum));
	}
	sort(A.begin(),A.end(),comp);
	cout << A[0].second << '\n';
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
int ans;
int A[105][105];
vector<int> temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		for (i = 0 ; i < n ; i++) 
			for (j = 0 ; j < n ; j++) cin >> A[i][j];
		for (i = 0 ; i < n-2 ; i++) {
			for (j = i+1; j < n-1; j++) {
				for (k = j+1; k < n ; k++) {
					temp.clear();
					temp.push_back(i); temp.push_back(j); temp.push_back(k);
					do {
						for (int z = 0 ; z < 3 ; z++) cout << temp[z] << " ";
						cout << '\n';
					}while (next_permutation(temp.begin(),temp.end())
				}
			}
		}
	}
	return 0;
}
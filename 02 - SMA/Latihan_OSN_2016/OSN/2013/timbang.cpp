#include <bits/stdc++.h>
using namespace std;

string dummy;
int nn;
int n,i,j;
int k,A[105];
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy >> nn;
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) A[i] = i;
	for (i = 0 ; i < n-1; i++) {
		for (j = i+1; j < n ; j++) {
			cout << "timbang " << A[i]+1 << " " << A[j]+1 << endl;
			fflush(stdout);
			int bil;
			cin >> bil;
			if (bil==-1) {}
			else {
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	cout << "jawab ";
	for (i = 0 ; i < n ; i++) {
		cout << A[i]+1;
		cout << (i==n-1 ?'\n':' ');
	}
	return 0;
}
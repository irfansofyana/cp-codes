#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tc;
vector<int> A;
int sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m) {
		sum = 0;
		for (i = 0 ; i < m ; i++) {
			int x; 
			cin >> x;
			A.push_back(x);
			sum += x;
		}
		double rata = (double)sum / n ; 
		double imba = 0;
		cout << fixed << showpoint << setprecision(5);
		cout << "Set #" << ++tc << '\n';
		int idx = 0;
		i = 0;
		while (i < m) {
			int jum = A[i];
			j = i+1;
			while ((double)jum < rata && j < m) {
				jum += A[j];
				j++;
			}
			// jum >= rata
			if (abs((double)(jum-A[j-1])-rata) < abs((double)(jum)-rata)) {
				imba += abs((double)(jum-A[j-1])-rata);
				cout << " " << idx << ": "; 
				for (int z = i ; z <= j-2; z++) {
					cout << A[z];
					cout << (z==j-2 ? '\n' : ' ');
				}
				idx++;
				i = j-1;
			}
			else {
				imba += abs((double)(jum)-rata);
				cout << " " << idx << ": "; 
				for (int z = i ; z <= j-1; z++) {
					cout << A[z];
					cout << (z==j-1 ? '\n' : ' ');
				}
				idx++;
				i = j;
			}
		}
		cout << "IMBALANCE = " << imba << '\n';
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int i,j;
vector<int> prima;
bool bil[300010];

int main() {
	memset(bil,false,sizeof(bil));
	for (i=2;i<=300000;i++) {
		if (!bil[i]) {
			prima.push_back(i);
			j = i;
			while (i*j<300000) {
				bil[i*j] = true;
				j++;
			}
		}
	}
	cout << prima[10000] << endl;
	return 0;
}

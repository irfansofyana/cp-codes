#include <bits/stdc++.h>
using namespace std;

int x,y,n,i,j;
int t;
vector<pair<int,int> > A;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		A.clear();
		if (n % 2 == 1) {
			x = 1; y = 1;
			for (i = 1 ; i <= n ; i++) {
				A.push_back({x,y});
				x+=2; y++;
				if (x > n) x = 2;
			}
			sort(A.begin(),A.end());
		}
		else {
			x = 2; y = 1;
			for (i = 1; i <= n/2 ; i++) {
				A.push_back({x,y});
				x += 2; y++;
			}
			if ((n/2)%2 == 0) {
				x = 1;
				for (i = 1; i <= n/2; i++) {
					A.push_back({x,y});
					x += 2; y++;
				}
			}
			else {
				x = 3;
				for (i = 1 ; i <= (n/2)-1; i++) {
					A.push_back({x,y});
					x += 2; y++;
				}
				A.push_back({1,y});
			}
			sort(A.begin(),A.end());
		}
		for (i = 0 ; i < A.size(); i++) {
				cout << A[i].first << " " << A[i].second << '\n';
		}
	}
	return 0;
}
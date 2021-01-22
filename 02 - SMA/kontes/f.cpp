#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int ans;
vector<pair<int,int> > A;
char c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0 ; i < 8 ; i++) {
		for (j =0 ; j < 8 ; j++) {
			cin >> c;
			if (c=='*') A.push_back(make_pair(i,j));
		}
	}
	if ((int)A.size()!=8) {
		puts("invalid");
		return 0;
	}
	for (i = 0 ; i < (int)A.size()-1; i++) {
		for (j = i+1; j < (int)A.size(); j++){
			int x,y,xx,yy;
			x = A[i].first; y = A[i].second;
			xx = A[j].first; yy = A[j].second;
			if (x==xx || y==yy) {
				puts("invalid");
				return 0;
			}
			if (abs(x-xx)==abs(y-yy)) {
				puts("invalid");
				return 0;
			}
		}
	}
	puts("valid");
	return 0;
}
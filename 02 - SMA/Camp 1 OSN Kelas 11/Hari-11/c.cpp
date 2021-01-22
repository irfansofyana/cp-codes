#include <bits/stdc++.h>
using namespace std;

int x,t,a,b,da,db,tb;
int sum;
int i,j,ta;
vector<int> tempa,tempb;
bool ans;

int main(){
	cin >> x >> t >> a >> b >> da >> db;
	tempa.push_back(a); tempb.push_back(b);
	for (i = 1; i<=t-1 ; i++) {
		a = a-da; b = b-db;
		tempa.push_back(a); tempb.push_back(b);
	}
	if (x==0) {
		puts("YES");
		return 0;
	}
	else {
		for (i = 0 ; i < tempa.size() ; i++) {
			if (tempa[i]==x) {
				puts("YES");
				return 0;
			}
		}
		for (i = 0 ; i < tempb.size() ; i++) {
			if (tempb[i]==x) {
				puts("YES");
				return 0;
			}
		}
		for (i = 0 ; i < tempa.size() ; i++){
			for (j = 0 ; j < tempb.size(); j++){
				if (tempa[i]+tempb[j]==x) {
					puts("YES");
					return 0;
				}
			}
		}
		puts("NO");
		return 0;
	}
}
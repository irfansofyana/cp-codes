#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int n,i;

int main(){
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) {
		int x;
		scanf("%d", &x);
		ans.push_back(x);
	}
	reverse(ans.begin(),ans.end());
	for (i = 0 ; i < ans.size(); i++) {
		printf("%d", ans[i]);
		if (i==ans.size()-1) printf("\n");
		else printf(" ");
	}
}
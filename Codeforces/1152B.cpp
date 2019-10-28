#include <bits/stdc++.h>

#define pb push_back
using namespace std;

int x, ret;
vector<int> ans;

bool cek(int x){
	x++;
	return ((x&(x-1)) == 0);
}

int main(){
	scanf("%d", &x);
	while (!cek(x)){
		for (int i = 22; i >= 0; i--){
			if ((1 << i) > x) continue;
			if ((x&(1<<i)) == 0){
				ret++;
				ans.pb(i+1);
				x = x^((1<<(i+1))-1);
				break;
			}
		}
		if (!cek(x)) {
			ret++;
			x++;
		}
	}
	printf("%d\n", ret);
	for (int i = 0; i < (int)ans.size(); i++){
		printf("%d", ans[i]);
		if (i == (int)ans.size()-1) printf("\n");
		else printf(" ");
	}
	return 0;	
}
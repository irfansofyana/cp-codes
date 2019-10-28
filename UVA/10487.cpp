#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,mini;
int A[1010];
vector<int> vi;
int k,tc,ans;

int main(){
	tc = 1;
	while (scanf("%d",&n) && n!=0) {
		vi.clear();
		for (i=0;i<n;i++)
			scanf("%d",&A[i]);
		for (i=0;i<n;i++) {
			for (j=i+1;j<n;j++)	
				vi.push_back(A[i]+A[j]);
		}
		scanf("%d",&m);
		printf("Case %d:\n",tc);
		tc++;
		//for (i=0;i<vi.size();i++) printf("%d\n",vi[i]);
		for (i=0;i<m;i++) {
			scanf("%d",&k);
			mini = 1000000000;
			for (j=0;j<vi.size();j++) 
				if (abs(vi[j]-k)<mini) {
					mini = abs(vi[j]-k);
					ans = vi[j];
				}
			printf("Closest sum to %d is %d.\n",k,ans);
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int d,sum,i,j,butuh,temp,now;
pair<int,int> A[50];
int jum,x,y,mini,maks;
vector<int> vi;

int main(){
	scanf("%d %d",&d,&sum);
	for (i=0;i<d;i++) {
		scanf("%d %d",&x,&y);
		A[i] = make_pair(x,y);
		mini+=x;
		maks+=y;
	}	
	if (!(sum>=mini && sum<=maks)) puts("NO");
	else {
		puts("YES");
		i = 0;
		while (i<d && sum!=mini) {
			mini = mini-A[i].first;
			now = A[i].second;
			while (now>(sum-mini) && now>A[i].first) now--;
			mini += now;
			vi.push_back(now);
			i++;
		}
		if (vi.size()==d) {
			for (j=0;j<vi.size();j++) {
				if (j==vi.size()-1) printf("%d\n",vi[j]);
				else printf("%d ",vi[j]);
			}
		}
		else {
			for (j=0;j<vi.size();j++)
				printf("%d ",vi[j]);
			for (j=i;j<d;j++){
				if (j==d-1) printf("%d\n",A[j].first);
				else printf("%d ",A[j].first);
			}
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int p,q,l,r,i,j,k;
pair<int,int> a[1010],b[1010];
int x,y,ans,prev;

int main(){
	scanf("%d %d %d %d",&p,&q,&l,&r);
	for (i=0;i<p;i++) {
		scanf("%d %d",&x,&y);
		a[i] = make_pair(x,y);
	}
	for (i=0;i<q;i++) {
		scanf("%d %d",&x,&y);
		b[i] = make_pair(x,y);
	}
	for (i=l;i<=r;i++) {
		for (j=0;j<q;j++){
			b[j] = make_pair(b[j].first+i-prev,b[j].second+i-prev);
		}
		bool temp = false;
		for (j=0;j<q;j++) {
			x = b[j].first;
			y = b[j].second;
			for (k=0;k<p;k++) {
				if ((x>=a[k].first && x<=a[k].second)||(y>=a[k].first && y<=a[k].second)) {
					ans++;
					temp = true;
					break;
				}
				else if ((a[k].first>=x && a[k].first<=y) || (a[k].second>=x && a[k].second<=y)){
					ans++;
					temp = true;
					break;
				}
			}
			if (temp) break;
		}
		prev = i;
	}
	printf("%d\n",ans);
}

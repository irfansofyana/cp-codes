#include <bits/stdc++.h>
using namespace std;

struct paket{
	char asli[1005],palsu[1005];
};

int n,i,j,jaw,m;
char temp[1005],input[1005][1005];
paket kamus[10005];
char ans[1005][1005];

int main(){
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) {
		scanf("%s", &temp);
		strcpy(kamus[i].asli,temp);
		j = strlen(temp);
		sort(temp,temp+j);
		strcpy(kamus[i].palsu,temp);
	}
	scanf("%d", &m);
	for (j = 0; j < m ; j++) {
		scanf("%s", &input[j]);
		int sz;
		sz = strlen(input[j]);
		sort(input[j],input[j]+sz);
		for (i = 0 ; i < n ; i++) {
			if (strcmp(input[j],kamus[i].palsu)==0) {
				jaw++;
				break;
			}
		}
	}
	printf("%d\n", jaw);
	for (i = 0 ; i < m ; i++) {
		int idx=0;
		for (j = 0 ; j < n ; j++) {
			if (strcmp(input[i],kamus[j].palsu)==0) {
				strcpy(ans[idx],kamus[j].asli);
				idx++;
			}
		}
		for (j = 0 ; j < idx ; j++) {
			if (j==idx-1) printf("%s\n", ans[j]);
			else printf("%s ", ans[j]);
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

char s1[20],s2[20];
int n,i,j,tanda,ans;
int nilai,sum,temp;

int main(){
	scanf("%s %s", &s1, &s2);
	for (i=0;i<strlen(s1);i++) {
		if (s1[i]=='+') nilai++;
		else nilai--;
	}
	for (i=0;i<strlen(s2);i++) {
		if (s2[i]=='+') sum++;
		else if (s2[i]=='-') sum--;
		else tanda++;
	}
	if (tanda==0) {
		if (nilai==sum) printf("%.12lf\n",double(1));
		else printf("%.12lf\n",double(0));
	} 
	else {
		for (i=0;i<(1<<tanda);i++) {
			temp = 0;
			for (j=0;j<tanda;j++) {
				if (i&(1<<j)) temp++;	//nambahin kalo digitnya !=0
				else temp--;
			}
			if (temp+sum==nilai) ans++;
		}
		printf("%.12lf\n",double(ans)/(1<<tanda));
	}
	return 0;
}

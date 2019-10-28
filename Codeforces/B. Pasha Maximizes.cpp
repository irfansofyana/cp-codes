#include <bits/stdc++.h>
using namespace std;

char s[50];
int pos,i,j,tukar;
char temp;

int main(){
	scanf("%s %d",&s,&tukar);
	for (i=0;i<strlen(s)-1;i++) {
		if (tukar<=0) break;
		temp = s[i];
		pos = i;
		for (j=i+1;j<strlen(s);j++) {
			if (j-i<=tukar && int(s[j])>int(temp)) {
				temp = s[j];
				pos = j;
			}
			else if (j-i>tukar) break;
		}
		if (pos!=i) {
			for (j=pos-1;j>=i;j--) {
				s[j+1] = s[j];
			}
			s[i] = temp;
			tukar-=(pos-i);
		}
	}
	printf("%s\n",s);
}

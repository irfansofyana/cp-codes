#include <bits/stdc++.h>
using namespace std;

int n,i,j;
char ans[100010];
int frek,sudah;
bool pertama=true;

char next(char c){
	return ((char)(int(c)+1));
}

int main() {
	cin >> n;
	i=0;
	while (sudah!=n) {
		if (pertama) {
			ans[i]='a';
			frek++; sudah++;
			pertama=false; i++;
		}
		else {
			if (frek==4){
				ans[i]='a';
				frek=1; i++;
			}
			else {
				ans[i]=next(ans[i-1]);
				frek++; i++;
			}
			sudah++;
		}
	}
	for (i=0;i<n;i++) cout<<ans[i];
	cout<<"\n";
}

#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string ans,a,b,c;
char asal[30];
bool used[30],valid;

int main(){
	for (i=0;i<30;i++)	asal[i] = '0';
	memset(used,false,sizeof used);
	cin >> n >> a >> b >> c;
	valid = true;
	for (i=0;i<n;i++) {
		if (asal[b[i]-'A'+1]=='0') {
			if (!used[a[i]-'A'+1]) {
				asal[b[i]-'A'+1] = a[i];
				used[a[i]-'A'+1] = true;
			}
			else {
				valid = false;
				break;
			}
		}
		else if (asal[b[i]-'A'+1]!=a[i]) {
			valid = false;
			break;
		}
	}
	if (!valid) puts("Pak Dengklek bingung");
	else {
		ans ="";
		for (i=0;i<n;i++) {
			if (asal[c[i]-'A'+1]=='0') ans = ans+'?';
			else ans = ans + asal[c[i]-'A'+1];
		}
		cout << ans << endl;
	}
}

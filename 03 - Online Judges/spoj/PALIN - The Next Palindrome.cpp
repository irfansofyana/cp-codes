#include <bits/stdc++.h>
using namespace std;
int n,i,j;
string s;
char ans[1000000];

int main(){
	cin >> n;
	getchar();
	while (n--) {
		cin >> s;
		memset(ans,'0',sizeof(ans));
		if (s.size()%2==1) {
			i = s.size()/2;
			j = i; 
		}
		else {
			i = (s.size()/2)-1;
			j = i+1;
		}
		while (i>=0 && j<s.size()) {
			if (i==j) {
				ans[i]=char((int)s[i]+1);
				i--;
				j++;
			}
			else {
				if (s[i]==s[j]){
					i--;
					j++;
				}
				else if (s[i]>s[j]) {
					ans[i]=s[i];
					ans[j]=s[i];
					i--;
					j++;
				}
				else if (s[i]<s[j]) {
					ans[i]=s[i];
					ans[j]=s[i];
					i--;
					j++;
				} 
			}
		}
		for (i=0;i<s.size();i++) cout<<ans[i];
		cout<<endl;
	}
}

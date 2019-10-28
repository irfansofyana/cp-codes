#include <bits/stdc++.h>
using namespace std;

char x[20];
int n,i,j;
vector<char> ans;

bool comp(char a,char b){
	return int(a)>int(b);
}

int main(){
	scanf("%d",&n);
	scanf("%s",&x);
	for (i=0;i<strlen(x);i++) {
		if (x[i]=='1' || x[i]=='0') continue;
		else if (x[i]=='4') {
			ans.push_back('3'); 
			for (int z=1;z<=2;z++)
				ans.push_back('2');
		}
		else if (x[i]=='6') {
			ans.push_back('5');
			ans.push_back('3');
		}
		else if (x[i]=='8') {
			ans.push_back('7');
			for (int z=0;z<3;z++) ans.push_back('2');
		}
		else if (x[i]=='9') {
			ans.push_back('7');
			for (int z=1;z<=2;z++) ans.push_back('3');
			ans.push_back('2');
		}
		else ans.push_back(x[i]);
	}
	sort(ans.begin(),ans.end(),comp);
	for (i=0;i<ans.size();i++)
		printf("%c",ans[i]);
	printf("\n");
	return 0;
}

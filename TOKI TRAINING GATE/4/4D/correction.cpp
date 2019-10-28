#include <bits/stdc++.h>
using namespace std;
 
int k,n,i,j,mini,nilai[3005];
string s[3005],piv,kosong[3005];
string temp;
int idx;
bool ada = false;
int beda(char s,char l){
	if (abs((int)s-(int)l)>=14) return 26-abs((int)s-(int)l);
	return abs((int)s-(int)l);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin >> n; 
	for (i=0;i<n;i++){
        cin >> s[i];
    }
    cin >> piv;
	temp = "";
	for (i=0;i<3005;i++) kosong[i]="";
    for (i=0;i<piv.size();i++){
		temp += piv[i];
		mini = 1000000000;
		for (j=0;j<n;j++){
			if (i<s[j].size()) {kosong[j] +=s[j][i];
			nilai[j] += beda(s[j][i],temp[i]);}
			else nilai[j] = 1000000000;
			if (nilai[j]<mini) {
				mini = nilai[j];
				idx = j;
			}
		}
		cout << kosong[idx] <<endl;
		//for (j=0;j<n;j++) cout<<kosong[j]<<endl;
	}
    return 0;
}
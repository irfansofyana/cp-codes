/*ID : irfansofyana
PROG : friday
LANG : C++
*/

#include <bits/stdc++.h>
using namespace std;
int ans[14],hari[14],prev[14];
int n,i,j,k;
int awal;

int main() {
	ofstream fout("friday.out");
	ifstream fin("friday.in");
	
	fin >> n;
	//cin >> n;
	int sum=0;
	for (i=1;i<=12;i++) {
		if (i<8 && i%2==1) hari[i] = 31;
		else if (i==2) hari[i] = 28;
		else if (i<8 && i%2==0 && i!=2) hari[i] = 30;
		else if (i>=8 && i%2==0) hari[i] = 31;
		else if (i>=8 && i%2==1) hari[i] = 30;
		sum+=hari[i];
	}
	awal = 0; //monday
	for (i=1900;i<=1900+n-1;i++) {
		if ((i%4==0 && i%100!=0)||(i%400==0)) hari[2] = 29;
		else hari[2] = 28;
		memset(prev,0,sizeof prev); 
		prev[1] = hari[1];
		for (j=2;j<=12;j++) prev[j] = prev[j-1]+hari[j];
		//cout << i << endl;
		//for (j=1;j<=12;j++) cout<<prev[j] << " ";
		//cout<<"\n"; 
		for (j=1;j<=12;j++) {
			if (j==1) {
				ans[(awal+12)%7]++;
			}
			else {
				ans[(prev[j-1]+12+awal)%7]++;
			}
		}
		if ((i%4==0 && i%100!=0)|| (i%400==0)) awal = (366+awal)%7;
		else awal = (awal+365)%7;
	}
	fout << ans[5] <<" "<<ans[6]<<" ";
	for (i=0;i<=4;i++) {
		if (i==4) fout << ans[i] << endl;
		else fout << ans[i] << " ";
	}
	return 0;
}

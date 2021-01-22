#include <bits/stdc++.h>
using namespace std;

struct paket{
	int nilai,pos;
};
int banyak,n,i,j,z,temp,dikumpul;
paket A[2010];
bool ans = false;
queue <int> que;
bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else if (a.nilai==b.nilai) {
		if (a.nilai<b.nilai) return true;
		else return false;
	}
	else return false; 
}

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++){
		cin >> temp;
		A[i].nilai = temp;
		A[i].pos = i+1;
	}
	sort(A,A+n,comp);
	i = 0; 
	dikumpul = 0; 
	while (i<n) {
		 j = i;
		 banyak = 1;
		 while (A[j].nilai==A[j+1].nilai && j<n-1) {
		 	j++; banyak++;
		 }
		// cout<<banyak<<" "<<dikumpul<<endl;
		 if (banyak>=3) {
		 	cout << "YES" << endl;
		 	for (z=0;z<n;z++) {
		 		if (z!=n-1) cout<<A[z].pos<<" ";
		 		else cout<<A[z].pos<<endl;
		 	}
		 	for (int l=0;l<i;l++) cout<<A[l].pos<<" ";
			cout<<A[i+1].pos<<" "<<A[i].pos<<" ";
		 	for (z=i+2;z<n;z++){
		 		if (z!=n-1) cout<<A[z].pos<<" ";
		 		else cout<<A[z].pos<<endl;
		 	}
		 	for (int l=0;l<i;l++) cout<<A[l].pos<<" ";
		 	cout << A[i].pos << " " << A[i+2].pos << " " << A[i+1].pos << " ";
		 	for (z=i+3;z<n;z++){
		 		if (z!=n-1) cout<<A[z].pos<<" ";
		 		else cout<<A[z].pos<<endl;
		 	}
		 	ans = true;
		 	break;
		 }
		 if (banyak == 2) {
		 	dikumpul++;
			que.push(i);
		 }
		 if (dikumpul>=2) {
		 	puts("YES");
			for (z=0;z<n;z++){
		 		if (z!=n-1) cout<<A[z].pos<<" ";
		 		else cout<<A[z].pos<<endl;
		 	}
		 	for (int l=1;l<=2;l++){
			 	z=0;
			 	while (z<n) {
			 		if (z==que.front()) {
			 			cout<<A[z+1].pos<<" "<<A[z].pos<<" ";
			 			z+=2;
			 		}
			 		else if (z==n-1) {
			 			cout<<A[z].pos<<endl;
			 			z++;
					}
			 		else {
			 			cout<<A[z].pos<<" ";
			 			z++;
			 		}
			 	}
			 	que.pop();
		 	} 
		 	ans = true;
		 	break;
		 }
		 i = j+1; 
	}
	if (!ans) puts("NO");
}


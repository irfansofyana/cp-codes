#include <bits/stdc++.h>
struct paket{
	int mat,fis,kim,bio,indo,ingg;
};
using namespace std;

int n,i,j,m,b,k,f,ind,ing;
char urutan[7][25];
paket A[100010];

bool comp(paket a,paket b){
	int aa[7];
	int bb[7];
	for (int z=0;z<6;z++){
		if (strcmp(urutan[z],"KIM")==0) {
			aa[z] = a.kim;
			bb[z] = b.kim;
		} 
		else if (strcmp(urutan[z],"IND")==0){
			aa[z] = a.indo; 
			bb[z] = b.indo;
		}
		else if (strcmp(urutan[z],"ING")==0) {
			aa[z] = a.ingg;
			bb[z] = b.ingg;
		}
		else if (strcmp(urutan[z],"MTK")==0) {
			aa[z] = a.mat;
			bb[z] = b.mat;
		}
		else if (strcmp(urutan[z],"FIS")==0){
			aa[z] = a.fis;
			bb[z] = b.fis;
		}
		else if (strcmp(urutan[z],"BIO")==0){
			aa[z] = a.bio;
			bb[z] = b.bio;
		}
 	}
	if (aa[0]==bb[0]){
		if (aa[1]==bb[1]) {
			if (aa[2]==bb[2]){
				if (aa[3]==bb[3]){
					if (aa[4]==bb[4]) {
						return (aa[5]>bb[5]);
					}
					return (aa[4]>bb[4]); 
				}
				return (aa[3]>bb[3]);
			}
			return (aa[2]>bb[2]);
		}
		return (aa[1]>bb[1]);
	} 
	return (aa[0]>bb[0]);
}
int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d %d %d %d %d",&m,&b,&k,&f,&ind,&ing);
		A[i].mat = m;
		A[i].bio = b;
		A[i].kim = k;
		A[i].fis = f;
		A[i].indo = ind;
		A[i].ingg = ing;
  	}
	for (i=0;i<6;i++) scanf("%s",urutan[i]);
//	for (i=0;i<6;i++) printf("%s\n",urutan[i]);
	sort(A,A+n,comp);
	for (i=0;i<min(n,100);i++) printf("%d %d %d %d %d %d\n",A[i].mat,A[i].bio,A[i].kim,A[i].fis,A[i].indo,A[i].ingg); 	
	return 0;
}
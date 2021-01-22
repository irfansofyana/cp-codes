#include <bits/stdc++.h>
using namespace std;
 
int a,b,i,tengah,depan,akhir;
char hasil[30];
 
int main(){
    scanf("%d %d",&a,&b);
    depan = a;
    akhir = b;
    for (i=1;i<=10;i++) {
        tengah = (depan+akhir)/2;
        printf("%d\n",tengah);
        fflush(stdout);
        gets(hasil);
        if (strcmp(hasil,"selamat")==0) break;
        else if (strcmp(hasil,"terlalu kecil")==0) depan = tengah+1;
        else if (strcmp(hasil,"terlalu besar")==0) akhir = tengah-1;
    }
    return 0;
}

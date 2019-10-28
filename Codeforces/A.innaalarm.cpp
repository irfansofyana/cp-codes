#include<cstdio>
using namespace std;

int main(){
int n,x,y,a[101]={0},b[101]={0},i,maksa,maksb;
scanf("%d",&n);
maksa=0;
maksb=0;
for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    a[x]++; b[y]++;
}
for(i=0;i<=100;i++){
    if(a[i]!=0) maksa++;
}
for(i=0;i<=100;i++){
    if(b[i]!=0) maksb++;
}
if(maksa>maksb) printf("%d",maksb);
else printf("%d",maksa);
}
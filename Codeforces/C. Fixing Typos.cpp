#include<stdio.h>
int main(){
    int i,j,k=0;
    char a[200009],b[200009];
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++){
        if(k>1&&b[k-1]==b[k-2]&&b[k-1]==a[i]){}
        else if(k>2&&a[i]==b[k-1]&&b[k-2]==b[k-3]){}
        else {
            b[k]=a[i];
            k++;
        }
    }b[k]='\0';
    printf("%s\n",b);
}

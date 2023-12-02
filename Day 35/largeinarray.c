#include<stdio.h>
int main(){int n,i;
printf("size of the array");
scanf("%d",&n);
int a[n];
for( i=0; i<n;i++){
    scanf("%d",&a[i]);
}int max=0;
for(i=0;i<n;i++){
    if(a[i]<a[i+1]){
       max=a[i+1];}
}
printf("%d",max);
}

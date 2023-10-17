#include<stdio.h>
int main(){
int i,n,j;
printf("No of elements");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
   if(a[i]>a[j]){
   int t;
       t=a[j];
       a[j]=a[i];
       a[i]=t;
       }
       }
       }
       
       printf("%d",a[n-2]);


}


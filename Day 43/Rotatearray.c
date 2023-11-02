#include<stdio.h>
int main(){
int i,n,j,k,temp;
printf("Enter the size of array");
scanf("%d",&n);
int a[n];
printf("Enter tha rotation");
scanf("%d",&k);
k=k%n;
for(int i=0;i<n;i++){
     scanf("%d",&a[i]);}
for(i=0;i<k;i++){
int temp=a[n-1];
for(j=n-1;j>0;j--){
  a[j]=a[j-1];
     }
     a[0]=temp;
     }

for(i=0;i<n;i++){
    printf("%d\n",a[i]);}


return 0;


}

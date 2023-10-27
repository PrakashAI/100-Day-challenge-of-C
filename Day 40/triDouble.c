#include<stdio.h>
int main(){
int n,i,j,s;
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<=i;j++){
   printf("%d",j+1);

} 
  for(s=0;s<2*(n-i-1);s++){
   printf(" ");
   }
   for(j;j>0;j--){
        printf("%d",j);}


printf("\n");
}
}

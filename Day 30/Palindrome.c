#include<stdio.h>
int main(){
int r,a,n,b=0,t=0;
printf("Enter the number ");
scanf("%d",&n);
a=n;
while(a!=0){
 a=(a/10);
 b++;}
 int ar[b];
 int i=0;
 a=n;
 while(a!=0){
 r=a%10;
 a=(a/10);
 ar[i]=r;
 i++;
 }
 for(i=0;i<b/2;i++){
 if(ar[i]==ar[b-i-1])
      t++;
 
 }
 if(t==b/2)
    printf("Palindrome");
    
  else
      printf("NO");  
    

return 0;
}





    

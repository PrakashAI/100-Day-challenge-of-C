#include<stdio.h>
int main(){
int b,j;
int ar[]={5,3,3,6,5,2,2};

int min;
int found=0;
for(int i=0;i<7;i++){
b=0;
 min=ar[i];
for(j=0;j<7;j++){

if(i !=j && min==ar[j]){
   b++;
   }
   
   }
   if(b==0){
   found =1;
      break;}
   }
if(found)
   printf("%d",min);

}



/*output
A
AB
ABC
ABCD
ABCDE



*/

#include<stdio.h>

int main(){int x;
printf("Enter the value");
scanf("%d",&x);
for(int i=0;i<x;i++){
for(int j=0;j<i;j++){
 
  printf("%c",65+j);}


printf("\n");}
return 0;
   }

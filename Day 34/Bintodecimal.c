#include<stdio.h>
#include<math.h>

int main(){
 long int r,a,n,sum=0,t=0;
printf("Enter the number ");
scanf("%d",&n);
a=n;
int i=0;
while(a!=0){
 r=a%10;
 if(r==1){
   sum=sum+pow(2,i);
   
 }
 else 
    sum=sum+0;
i++;
a=a/10;

 

}
printf("%d",sum);

}



    

#include<stdio.h>
#include<math.h>

int main(){
int r,a,n,b=0,t=0;
printf("Enter the number ");
scanf("%d",&n);

for(int i=2;i<=sqrt(n);i++){
     if(n==2){
        printf("Prime number");
        break;}
     else
     {
     if(n%i==0){
           t++;
          break;}}

}
 
 
 if(t==1)
    printf("not prime number");
    
 else
      printf("prime number");  
    

return 0;
}





    

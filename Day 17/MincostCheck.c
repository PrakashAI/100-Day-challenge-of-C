#include<stdio.h>
int main(){
int t,x,y,z,a;
printf("Enter the number of water to be consume per day");
scanf("%d",&x);
printf("Enter the capasity of the glass in ltr ");
scanf("%d",&y);
printf("Enter the cost for refilling ");
scanf("%d",&z);
if(x%y==0){
	         printf("Cost price is %d\n",(x/y)*z);}
	    else if(x<y)
	        printf(" Cost price is %d\n",z);
	  
	    else if (x>y){
	          a=(x/y)+1;
	          printf("Cost price is  %d\n",a*z);}
	    else  
	         printf("Cost price is  %d\n",z);
	       

return 0;









}
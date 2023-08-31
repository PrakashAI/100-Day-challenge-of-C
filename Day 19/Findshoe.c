/*Chef has 
�
N friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his 
�
N friends. Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had 
�
M left shoes.

What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his 
�
N friends?*/
#include<stdio.h>
int main(){
int n,x;
printf("Enter the number of friends :");
scanf("%d",&n);
printf("Enter the nubmer of already left shoe :");
scanf("%d",&x);
 
    if(n<x)
        printf("%d\n",n);
    else    
        printf("%d\n",(n-x)+n);
    
    return 0;











}
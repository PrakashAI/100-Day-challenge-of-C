/*Chef wants to gift
�
C chocolates to Botswal on his birthday. However, he has only
�
X chocolates with him.
The cost of
1
1 chocolate is
�
Y rupees.

Find the minimum money in rupees Chef needs to spend so that he can gift
�
C chocolates to Botswal.*/

#include<stdio.h>
int main(){
int x,y,z;
printf("Enter total chocolate ");
scanf("%d",&x);
printf("Enter already haded chocolate ");
scanf("%d",&y);
printf("Enter cost of each chocolate");
scanf("%d",&z);

printf("Minimum cost to buy the chocolate is %d",(x-y)*z);
return 0;





}

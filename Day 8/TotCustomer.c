/*
Chef has invented
1
1-minute Instant Noodles. As the name suggests, each packet takes exactly
1
1 minute to cook.

Chef's restaurant has
�
X stoves and only
1
1 packet can be cooked in a single stove at any minute.

How many customers can Chef serve in
�
Y minutes if each customer orders exactly
1
1 packet of noodles?*/


#include<stdio.h>
int main(){
    int x,y;
printf("Enter no of stoves");
scanf("%d",&x);
printf("Enter total Minutes");
scanf("%d",&y);
printf("Number of customer handled bye the chef is %d ",x*y);
return 0;








}

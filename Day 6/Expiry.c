/*
Eikooc loves bread. She has
�
N loaves of bread, all of which expire after exactly
�
M days. She can eat upto
�
K loaves of bread in a day. Can she eat all the loaves of bread before they expire?


*/
#include<stdio.h>
    int main(){
    int x,y,z;
    printf("Enter total no of bread loaves");
    scanf("%d",&x);
    printf("Enter Expiry date");
    scanf("%d",&y);
    printf("Enter bread eaten in a day");
    scanf("%d",&z);

        if(y*z>=x)
            printf("YES");
        else
            printf("NO");

    return 0;}











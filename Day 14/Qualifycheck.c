/*In computing, the collection of four bits is called a nibble.

Chef defines a program as:

Good, if it takes exactly
�
X nibbles of memory, where
�
X is a positive integer.
Not Good, otherwise.
Given a program which takes
�
N bits of memory, determine whether it is Good or Not Good.*/

#include<stdio.h>
int main(){
        int x,y,z;
    printf("Enter the threshold value for qualify ");
    scanf("%d",&x);
    printf("Enter the no of Easy Questions ");
    scanf("%d",&y);
    printf("Enter the no of Hard Questions ");
    scanf("%d",&z);

        if(((y*1)+(z*2)) >= x)
	        printf("Qualify\n");
	    else
	        printf("NotQualify\n");
    return 0;












}

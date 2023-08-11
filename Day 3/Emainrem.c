
/*MoEngage helps the Chef send email reminders about rated contests to the participants.

There are a total of
�
N participants on Chef’s platform, and
�
U of them have told Chef not to send emails to them.

If so, how many participants should MoEngage send the contest emails to?    */


#include<stdio.h>
int main(){
int P,Q;
printf("Enter number of participants");
scanf("%d",&P);
printf("Enter number of not participants");
scanf("%d",&Q);
printf("Number of contests is %d ",P-Q );
return 0;
}

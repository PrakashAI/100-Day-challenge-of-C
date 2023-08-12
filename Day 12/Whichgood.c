/*Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers
�
A dollars for
10
10% of his company and the second investor offers
�
B dollars for
20
20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

For example, if the first investor offers
300
300 dollars for
10
10% of the company, then the first investor's valuation of the company is
3000
3000 dollars since
10
10% of
3000
=
300
3000=300. If the second investor offers
500
500 dollars for
20
20% of the company, then the second investor's valuation of the company is
2500
2500 dollars since
20
20% of
2500
=
500
2500=500.*/


#include<stdio.h>
    int main (){int x,y;
    printf("Enter Offer A value ");
    scanf("%d",&x);
    printf("Enter offer B value ");
    scanf("%d",&y);

        if(x*10==y*5)
                printf("Choose Any ");
        else if (x*10>y*5)
                printf("Choose A offer");
        else
            printf("Choose B offer ");
    return 0;
















    }

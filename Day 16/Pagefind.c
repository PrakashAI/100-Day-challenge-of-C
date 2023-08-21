#include <stdio.h>

int main(void) {
	// yo code goes here
	
	
        int x;
		printf("Enter the rank ");
	    scanf("%d",&x);
	    if(x<=25)
	        printf("page number is :1");
	   else if(x%25==0)
	        printf("page number is : %d\n",x/25);
	    else 
	       printf("page number is  :%d\n",(x/25)+1);
	    
	    
	    
	    
	    
	}
	return 0;
}


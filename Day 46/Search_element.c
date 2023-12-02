#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,i,n;
	scanf("%d",&t);
	while (t--){
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    scanf("%d",&x);
	    int b=0;
	   for(i=0;i<n;i++){
	       if(a[i]==x){
	             b=1;
	             break;
	              
	       }
	   }if(b==1)
	       printf("YES\n");
	    else 
	        printf("No\n");
	   
	    
	}
	return 0;
}



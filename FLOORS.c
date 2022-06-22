#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase=0,x=0,y=0,xi=0,yi=0;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    scanf("%d%d",&x,&y);
	    if(x%10==0)
	        xi=x/10;
	    else
	        xi=x/10+1;
	   if(y%10==0)
	        yi=y/10;
	    else
	        yi=y/10+1;
	   printf("%d\n",abs(yi-xi));
	}
	return 0;
}

//refer link for problem statement:https://www.codechef.com/submit/FLOORS

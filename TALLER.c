#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase=0,alice=0,bob=0;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    scanf("%d%d",&alice,&bob);
	    (alice>bob)?printf("A\n"):printf("B\n");
	}
	return 0;
}

//refer link for problem statement:https://www.codechef.com/submit/TALLER?tab=statement

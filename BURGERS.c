#include <stdio.h>

int main(void) {
	// your code goes here
	int TestCase=0,patty=0,bun=0;
	scanf("%d",&TestCase);
	while(TestCase--)
	{
	    scanf("%d%d",&patty,&bun);
	    (patty<bun)?printf("%d\n",patty):printf("%d\n",bun);
	}
	return 0;
}

//Refer :https://www.codechef.com/submit-v2/BURGERS for question

#include <stdio.h>

int main(void) {
int TestCase=0,alice=0,bob=0;
	scanf("%d",&TestCase);
	while(TestCase--)
	{
	    scanf("%d%d",&alice,&bob);
	    if((alice+bob)%2==0)
	        (((alice+bob)/2)%2==0)?printf("Alice\n"):printf("Bob\n");
	    else
	        ((((alice+bob-1)/2))%2==0)?printf("Alice\n"):printf("Bob\n");
	}
	return 0;
}
//refer link for problem statement:https://www.codechef.com/submit-v2/MYSERVE

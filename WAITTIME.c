#include <stdio.h>

int main(void) {
int TestCase=0,NumberOfWeeks=0,completedDays=0;
	scanf("%d",&TestCase);
	while(TestCase--)
	{
	    scanf("%d%d",&NumberOfWeeks,&completedDays);
	    printf("%d\n",(NumberOfWeeks*7)-completedDays);
	}
	return 0;
}
//refer link for problem statement:https://www.codechef.com/submit-v2/WAITTIME

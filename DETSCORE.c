#include <stdio.h>

int main(void) {
int TestCase=0,XPoints=0,Npass=0;
	scanf("%d",&TestCase);
	while(TestCase--)
	{
	    scanf("%d%d",&XPoints,&Npass);
	    printf("%d\n",(XPoints/10)*Npass);
	}
	return 0;
}
//refer link for question:https://www.codechef.com/submit-v2/DETSCORE

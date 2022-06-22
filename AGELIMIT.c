#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase=0,X=0,Y=0,A=0;
	scanf("%d",&testCase);
	while(testCase--)
	{
	    scanf("%d%d%d",&X,&Y,&A);
	    if(A>=X && A<Y)
	        printf("YES\n");
	   else
	    printf("NO\n");
	}
	return 0;
}
//refer link for problem statement:https://www.codechef.com/submit/AGELIMIT

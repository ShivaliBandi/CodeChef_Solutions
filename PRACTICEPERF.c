#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[4]={0};
	for(int i=0;i<4;i++)
	    scanf("%d",&arr[i]);
	int icnt=0;
	for(int i=0;i<4;i++)
	    if(arr[i]>=10)
	        icnt++;
	printf("%d\n",icnt);
	return 0;
}

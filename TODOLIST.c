#include <stdio.h>
#include<stdlib.h>
int main(void) {
    int testcase=0,isize=0;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int icount=0,*arr;
        scanf("%d",&isize);
        arr=(int *)malloc(isize*sizeof(int));
        for(int i=0;i<isize;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<isize;i++)
            if(arr[i]>=1000)
                icount++;
        printf("%d\n",icount);
        
    }
	// your code goes here
	return 0;
}


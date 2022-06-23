#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase=0,a,b;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    scanf("%d%d",&a,&b);
        (a>b)?printf("%d\n",7-a):printf("%d\n",7-b);
	}
	return 0;
}

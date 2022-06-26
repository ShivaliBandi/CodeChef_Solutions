#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase=0,x=0,y=0;
	cin>>testcase;
	while(testcase--)
	{
	    cin>>x>>y;
	    (x>=y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}

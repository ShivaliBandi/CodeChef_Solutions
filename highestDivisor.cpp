/*


Highest Divisor Problem Code: HDIVISR
You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.

Input
The first and only line of the input contains a single integer N.

Output
Print a single line containing one integer ― the largest divisor of N between 1 and 10.

Constraints
2≤N≤1,000
Subtasks
Subtask #1 (100 points): original constraints

Example Input 1
24
Example Output 1
8
Explanation
The divisors of 24 are 1,2,3,4,6,8,12,24, out of which 1,2,3,4,6,8 are in the range [1,10]. Therefore, the answer is max(1,2,3,4,6,8)=8.

Example Input 2
91
Example Output 2
7
Explanation
The divisors of 91 are 1,7,13,91, out of which only 1 and 7 are in the range [1,10]. Therefore, the answer is max(1,7)=7.

*/

#include <iostream>
using namespace std;
class HigestDivisor
{
    public:
    int ivalue=0;
    HigestDivisor(int ivalue)
    {
        this->ivalue=ivalue;
    }
    int checkHigestDivisor()
    {
        int i;
       for( i=10;i>0;i--)
       {
           if(ivalue%i==0)
            break;
       }
       return i;
    }
};
int main() {
	// your code goes here
    int ivalue;
	cin>>ivalue;
	HigestDivisor *hobj=new HigestDivisor(ivalue);
	cout<<(*hobj).checkHigestDivisor();
	return 0;
}

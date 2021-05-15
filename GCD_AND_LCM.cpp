/*
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000
Example
Input
3 
120 140
10213 312
10 30

Output

20 840
1 3186456
10 30
*/
#include <iostream>
using namespace std;
int calculate(long long int inum1,long long int inum2)
{
   
    if(inum1==0)
        return inum2;
    if(inum2==0)
        return inum1;
    if (inum1 == inum2)
        return inum1;
  
    // a is greater
    if (inum1 > inum2)
        return calculate(inum1-inum2,inum2);
    return calculate(inum1, inum2-inum1);
}
int main() {
 // your code goes here
 
	 long long int inum1=0,inum2=0,gcd=0,lcm=0,inum,testcase=0;
 cin>>testcase;
while(testcase--)
{
	cin>>inum1;
    cin>>inum2;
    gcd=calculate(inum1,inum2);
    lcm=(inum1*inum2)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
	
}
return 0;
}

/*

Decrement OR Increment Problem Code: DECINC
Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input:
First line will contain a number N.
Output:
Output a single line, the new value of the number.

Constraints
0≤N≤1000
Sample Input:
5
Sample Output:
4
EXPLANATION:
Since 5 is not divisible by 4 hence, its value is decreased by 1.



*/

using namespace std;
#include<string>  
#include <iostream>
bool check(string str)
{
    int n = str.length();
    if (n == 0)
        return false;
    if (n == 1)
        return ((str[0] - '0') % 4 == 0);
    int last = str[n - 1] - '0';
    int second_last = str[n - 2] - '0';
    return ((second_last * 10 + last) % 4 == 0);
}
int main()
{
    string str,ret;
    cin >> str;
    check(str) ?  ret="yes" : ret= "no";
    if(ret=="yes")
        str=to_string(stoi(str)+1);
    else
            str=to_string(stoi(str)-1);
    cout<<str;
    return 0;
}

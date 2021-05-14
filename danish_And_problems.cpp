/*Daanish and Problems Problem Code: DIV03
Daanish as always is busy creating and solving his favourite and interesting graph problems. Chef assigns each problem a difficulty — an integer between 1 and 10. For each valid i, there are Ai problems with difficulty i.

A participant hacked Daanish's account and got access to the problem proposal document. He can delete up to K problems from the document in order to reduce the difficulty of the contest for himself and his friends. Find the smallest possible value of the difficulty of the most difficult problem which remains after removing K problems.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains 10 space-separated integers A1,A2,…,A10.
The second line contains a single integer K.
Output
For each test case, print a single line containing one integer — the minimum difficulty of the most difficult remaining problem.

Constraints
1≤T≤2⋅104
0≤Ai≤108 for each valid i
A1+A2+…+A10>0
0≤K<A1+A2+…+A10
Subtasks
Subtask #1 (100 points): original constraints

Example Input
5
1 10 1 5 3 2 4 9 0 100
100
2 0 1 0 0 0 0 0 0 10
12
2 0 1 0 0 0 0 10 0 0
0
2 0 1 0 0 0 0 0 0 10
10
1 10 1 5 3 2 4 9 0 100
125
Example Output
8
1
8
3
2

Explanation
Example case 1: The participant can remove all 100 problems with difficulty 10. Then, there are no problems with difficulties 9 and 10, so the maximum difficulty among remaining problems is 8.

Example case 2: The participant can remove all problems with difficulties 3 and 10 and any one of the problems with difficulty 1. Then, the only problem left has difficulty 1.

Example case 3: The participant cannot remove any problem. The document does not contain any problems with difficulties 9 or 10, so the maximum difficulty of a problem is 8.
*/




#include <iostream>
using namespace std;
class danish
{
    private:
        int arr[10],k=0;
    public:
    danish(int arr[10],int k)
    {
        for(int i=0;i<10;i++)
            this->arr[i]=arr[i];
        this->k=k;
    }
    int calculate()
    {
        int i=9;
        for(;i>=0;i--)
        {
           
            if(k>=arr[i])
                 k=k-arr[i];
            else
            break;
               
            
            
        }
       
        return i+1;
    }
    
};
int main() {
    int arr[10]={0},k=0,testcase=0;
    cin>>testcase;
    while(testcase)
    {
        for(int i=0;i<10;i++)
            cin>>arr[i];
        cin>>k;
        danish *dobj=new danish(arr,k);
        cout<<(*dobj).calculate()<<endl;
        testcase--;
    }
   
    
	// your code goes here
	return 0;
}

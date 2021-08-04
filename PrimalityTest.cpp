


/*
Primality Test
Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .

Input
The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

Output
For each test case output in a separate line, "yes" if the number is prime else "no."

Constraints
1 ≤ T ≤ 20
1 ≤ N ≤ 100000
Input:
5
23
13
20
1000
99991

Output:
yes
yes
no
no
yes






*/











#include <iostream>
using namespace std;

int main() {
    int testcase=0;
    cin>>testcase;
    while(testcase--)
    {
        
        int  i,n;
        bool isPrime = true;

   
        cin >> n;
    
        if (n == 0 || n == 1) {
            isPrime = false;
        }
        else {
                for ( i = 2; i<n/2; i++)
                {
                    if (n%i == 0) {
                        isPrime = false;
                        break;
                    }
                }
        }
        if (isPrime)
            cout<< "yes\n";
        else
            cout<<"no\n";
        
    }

    return 0;
}

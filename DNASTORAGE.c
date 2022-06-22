#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string ans="";
	  for(int i=0;i<n;i+=2)
	  {
	      if(s[i]=='0')
	      {
	          if(s[i+1]=='0')
	          ans+='A';
	          else
	          ans+='T';
	          
	      }
	      else
	      {
	          if(s[i+1]=='0')
	          ans+='C';
	          else
	          ans+='G';
	      }
	  }
	  cout<<ans<<"\n";
	}
	return 0;
}

//refer link for problemn statement:https://www.codechef.com/submit/DNASTORAGE?tab=statement

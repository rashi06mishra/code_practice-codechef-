```
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void) {
	// your code goes here
	int T,q,p;
	string s,s1,s2;
	cin>>T;
	while(T){
	    cin>>s;
	    q=s.length();
	    p=(s.length())/2;
	    for(int i=0; i<p;i++){
	        s1.push_back(s[i]);
	        if(q%2== 0)
	            s2.push_back(s[i+p]);
	        else
	            s2.push_back(s[i+1+p]);
	    }
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    if(s1 == s2)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    s1 ="";
	    s2 ="";
	    T--;
	}
	return 0;
}
```

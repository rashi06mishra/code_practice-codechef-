```
#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
while(T--){
	    string str;
	    cin>>str;
	    int max=0;
	    stack <char> s;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='<'){
	            s.push(str[i]);
	        }
	        else if(str[i] == '>'){
	            if(s.empty()){
	                break;
	            }
	            else{
	                s.pop();
	                if(s.empty()){
	                    max = i+1;
	                }
	            }
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
```

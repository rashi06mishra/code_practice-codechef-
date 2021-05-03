```
#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    switch(c){
        case '+': case '-':
            return 1;
        case '*': case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}
int main() {
	int T;
	cin>>T;
	while(T--){
	    string s, postfix;
	    stack <char> st;
	    cin>>s;
	    for(int i=0;i<s.size();i++){
	        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
	            postfix.push_back(s[i]);
	        }
	        else if(s[i]=='('){
	            st.push(s[i]);
	        }
	        else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^'){
	            int p = prec(s[i]);
	            int stp;
	            if(!st.empty()){
	                stp = prec(st.top());
	            }
	            else{
	                stp = -1;
	            }
	            if(stp >= p && st.top()!='('){
	                postfix.push_back(st.top());
	                st.pop();
	                st.push(s[i]);
	            }
	            else{
	                st.push(s[i]);
	            }
	        }
	        else if(s[i]==')'){
	            while(!st.empty() && st.top()!='('){
	                postfix.push_back(st.top());
	                st.pop();
	            }
	            if(!st.empty()){
	                st.pop();
	            }
	        }
	    }
	    while(!st.empty()){
	        if(st.top()!='(' && !st.empty()){
	            postfix.push_back(st.top());
	            st.pop();
	        }
	        else if(!st.empty()){
	            st.pop();
	        }
	    }
	    cout<<postfix<<endl;
	}
	return 0;
}
```

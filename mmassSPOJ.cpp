```
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int val(char c){
    switch(c){
        case 'C':
            return 12;
        case 'O':
            return 16;
        case 'H':
            return 1;
    }
    return 0;
}

int main() {
	string s;
	int l,i,v;
	stack <int> st;
	cin>>s;
	l= s.size();
	for(int i=0;i<l;i++){
	    if(isdigit(s[i])){
	        v = st.top();
	        st.pop();
	        st.push(v*(s[i]-'0'));
	    }
	    else if(s[i]=='('){
	        st.push(-1);
	    }
	    else if(s[i]==')'){
	        v=0;
	        while(!st.empty() && st.top()!=-1){
	            v += st.top();
	            st.pop();
	        }
	        st.pop();
	        st.push(v);
	    }
	    else if(isalpha(s[i])){
	        st.push(val(s[i]));
	    }
	}
	v=0;
	while(!st.empty()){
	    v +=st.top();
	    st.pop();
	}
	cout<<v<<endl;
	return 0;
}
```

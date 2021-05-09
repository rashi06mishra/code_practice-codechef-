```
#include <iostream>
#include <stack>
using namespace std;

int main() {
	long long N;
	while(cin>>N){
	    if(N==0){
	        break;
	    }
	    long long hist[N];
	    for(long long i=0;i<N;i++){
	        cin>>hist[i];
	    }
	    long long tp;
	    long long maxArea=0;
	    long long areaTop;
	    stack <long long> st;
	    long long i=0;
    	while(i<N){
	        if(st.empty() || hist[st.top()]<=hist[i]){
	            st.push(i++);
	        }
	        else{
	            if(!st.empty()){
	                tp=st.top();
	                st.pop();
	            }
	            areaTop = hist[tp]*(st.empty()?i:(i-st.top()-1));
	            maxArea  = (maxArea>=areaTop)?maxArea:areaTop;
	        }
	    }
	    while(!st.empty()){
	        if(!st.empty()){
	                tp=st.top();
	                st.pop();
	       }
	        areaTop = hist[tp]*(st.empty()?i:(i-st.top()-1));
	        maxArea  = (maxArea>=areaTop)?maxArea:areaTop;
	    }
	    cout<<maxArea<<endl;
	 }
	return 0;
}
```

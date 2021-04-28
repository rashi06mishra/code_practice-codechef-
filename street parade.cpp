```
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	long long n;
	while(cin>>n){
	    if(n==0){
	        break;
	    }
	    vector <int> e(n);
	    for(int i=0;i<n;i++){
	        cin >> e[i];
	    }
	    stack <int> st;
	    int need =1;
	    bool pass=true;
	    for(int i=0;i<n;i++){
	        while(!st.empty() && st.top()==need){
	            need++;
	            st.pop();
	        }
	        if(e[i]==need){
	            need++;
	        }
	        else if(!st.empty() && st.top()<e[i]){
	            pass = false;
	            break;
	        }
	        else {
	            st.push(e[i]);
	        }
	    }
	    if(n!=0){
	        if(pass){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}
```

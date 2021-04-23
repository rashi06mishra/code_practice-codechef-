```
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int temp;
		vector <int> v;
		for(int i=0;i<N;i++){
			cin>>temp;
			v.push_back(temp);
		}
		int k=N-2;
		for(k;v[k]>=v[k+1];k--){}
		if(k==(-1)){
		    cout<<k<<endl;
		    continue;
		}
		int i=N-2;
		int last = v[N-1];
		stack <int> st;
		st.push(last);
		v.pop_back();
		for(i;i>=0;i--){
			if(v[i]<st.top()){
			    temp = v[i];
			    st.push(v[i]);
			    v.pop_back();
			    break;
			}
			else{
			    st.push(v[i]);
			    v.pop_back();
			}
			
		}
		vector <int> v4u;
		while(!st.empty()){
			v4u.push_back(st.top());
			st.pop();
		}
		sort(v4u.begin(),v4u.end());
		int pos;
		int s = v4u.size();
		
		for(int i=0;i<s;i++){
		    if(temp<v4u[i]){
		        pos=i;
		        break;
		    }
		    
		}
		swap(v4u[0],v4u[pos]);
		sort(v4u.begin()+1, v4u.end());
		
		for(int i=0;i<s;i++){
		    v.push_back(v4u[i]);
		}
		for(int j=0;j<N;j++){
			cout<<v[j];
		}
		cout<<endl;
	}
	return 0;
}
```

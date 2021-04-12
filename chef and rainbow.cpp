```
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector <int> o;
	    for(int i=0;i<N;i++){
	        int temp;
	        cin>>temp;
	        o.push_back(temp);
	    }
	    bool rainbow = true ;
	    vector <int>:: iterator it;
	    if(o != vector<int>(o.rbegin(), o.rend())){       //to check for palindrome
	        rainbow = false;
	    }
	    else{
	        it = std:: unique(o.begin(),o.end());       //unique is a spacial function which deletes/remove any consecutive duplicate element and 
	        o.resize(std:: distance(o.begin(),it));    // point to that element of the array where the new array end should point, as it does not resize arrays
	        if(o != vector<int>{1,2,3,4,5,6,7,6,5,4,3,2,1}){
	            rainbow = false;
	        }
	    }
	    if(rainbow){
	        cout<<"yes\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}
	return 0;
}
```

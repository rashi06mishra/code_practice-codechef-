```
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int size;
	    string bin;
	    cin>>size;
	    cin>>bin;
	    long long n =0;
	    long long subBin;
	    for(int i=0;i<size;i++){
	        if(bin[i]=='1'){
	            n++;
	        }
	    }
	    subBin = (long long) ((n*(n+1))/2);
	    cout<<subBin<<"\n";
	}
	return 0;
}
```

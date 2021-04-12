```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N, K;
	    cin>>N>>K;
	    vector <string> words;
	    vector <string> phrases;
	    int L;
	    for(int i=1;i<=N;i++){
	        string word;
	        cin>>word;
	        words.push_back(word);
	    }
	    for(int i=1;i<=K;i++){
	        string phrase;
	        cin>>L;
	        getline(cin, phrase);
	        phrases.push_back(phrase);
	    }
	    for(int i=0;i<N;i++){
	        int j=0;
	        for(j;j<K;j++){
	            size_t found = phrases[j].find(words[i]);
	            if( found != string:: npos){
	                cout<<"YES ";
	                break;
	            }
	            else if(j==(K-1)){
	                cout<<"NO ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
```

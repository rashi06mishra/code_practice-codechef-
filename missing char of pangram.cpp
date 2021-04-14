```
#include<iostream>
#include <string>
using namespace std;

int main()
{
    string checkPangram;
    int alp[26];
    getline(cin,checkPangram);
    
    for(int i=0;i<checkPangram.length();i++){
        int t;
        if(checkPangram[i]>='A' && checkPangram[i]<='Z'){
            t = (int)(checkPangram[i]-'A');
            alp[t]=0;
        }
        if(checkPangram[i]>='a' && checkPangram[i]<='z'){
            t = (int)(checkPangram[i]-'a');
            alp[t]=0;
        }
    }
    for(int i=0;i<26;i++){
        if(alp[i]){
            cout<<(char)('a'+i);
        }
    }
return 0;
}

```

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    char a[3][3];
	    int cntO=0,cntX=0,cntU=0,winX=0,winO=0;
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
	            cin>>a[i][j];
	            if(a[i][j]=='X'){
	                cntX++;
	            }
	            else if(a[i][j]=='O'){
	                cntO++;
	            }
	            else if(a[i][j]=='_'){
	                cntU++;
	            }
	        }
	    }
	    if(a[0][0]==a[1][1] && a[1][1]==a[2][2]){
	        if(a[0][0]=='X'){
	            winX++;
	        }
	        else if(a[0][0]=='O'){
	            winO++;
	        }
	    }
	    if(a[0][2]==a[1][1] && a[1][1]==a[2][0]){
	        if(a[0][2]=='X'){
	            winX++;
	        }
	        else if(a[0][2]=='O'){
	            winO++;
	        }
	    }
	    for(int i=0;i<3;i++){
	        if(a[0][i]==a[1][i] && a[1][i]==a[2][i]){
	            if(a[0][i]=='X'){
	                winX++;
	            }
	            else if(a[0][i]=='O'){
	                winO++;
	            }
	        }
	    }
	    for(int i=0;i<3;i++){
	        if(a[i][0]==a[i][1] && a[i][1]==a[i][2]){
	            if(a[i][0]=='X'){
	                winX++;
	            }
	            else if(a[i][0]=='O'){
	                winO++;
	            }
	        }
	    }
	 
	   if(cntO>cntX){
	       cout<<3<<endl;
	   }
	   else if((cntX-cntO)>1){
	       cout<<3<<endl;
	   }
	   else if(cntX>cntO && winX==1 && winO==0){
	       cout<<1<<endl;
	   }
	   else if(cntX==cntO && winO==1 && winX==0){
	       cout<<1<<endl;
	   }
	   else if(cntU==0 && (winX+winO)==0){
	       cout<<1<<endl;
	   }
	   else if(cntU==0 && winX==2){
	       cout<<1<<endl;
	   }
	   else if(cntU>0 && (winX+winO)==0){
	       cout<<2<<endl;
	   }
	   else{
	       cout<<3<<endl;
	   }
	}
	return 0;
}

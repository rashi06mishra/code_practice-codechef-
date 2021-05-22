#include<bits/stdc++.h>
using namespace std;

const int M = 5e5 + 5;
vector<vector<int>> divs(M);

void pre(){
    int i , j;
    for(i=1;i<M;i++){
        for(j=i;j<M;j+=i){
            divs[j].push_back(i);
        }
    }
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	pre();
	int T;
	cin>>T;
	while(T--){
	    int n, m, b;
	    cin >> n >> m;
	    long long res =0;
	    for(b=2; b <= n ; b++){
	        int x = m - (m%b);
	        if(x>0)
	            res += lower_bound(divs[x].begin(), divs[x].end(),b) - divs[x].begin();
	        else
	            res += b-1;
	    }
	    cout << res << "\n";
	}
	return 0;
}

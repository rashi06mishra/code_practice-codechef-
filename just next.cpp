```
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
void toNumber(ll array[], int N)
{
    
	for(int i = 0; i < N; i++)
		cout<<array[i];	
	cout<<endl;
}
 

 
int main()
{
	int t = 0;
	cin>>t;
 
	while(t--)
	{
		int N = 0;
		cin>>N;
 
		ll array[N];
 
		for(int i = 0; i < N; i++)
			cin>>array[i];
 
		if(next_permutation(array,array+N))
		    toNumber(array,N);
		else
			cout<<-1<<endl;
	}
}
```

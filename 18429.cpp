#include <iostream>
using namespace std;

int n, k, count=0;
int a[9], res[9];
bool visit[9];

void f(int pos){
	if(pos==n){
		int wei = 500;
		bool flag=false;
		for(int i=0;i<n;i++){
			wei=wei-k;
			wei=wei+a[res[i]];
			if(wei<500)
			{
				flag=true;
				break;
			}
		}
		if(!flag) count++;
		return;
	}
	for(int i=0;i<n;i++)
		if(!visit[i])
		{
			visit[i]=true;
			res[pos]=i;
			f(pos+1);
			visit[i]=false;
		}
}
int main() {
	cin>>n>>k;
	a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	f(0);
	cout<<count; 
	return 0;
}

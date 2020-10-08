#include <iostream>
using namespace std;

int main() {
	int n, k, count=0, i, next;
	cin>>n>>k;
	int people[n];
	for(i=0;i<n;i++){
		cin>>people[i];
	}
	next=people[0];
	count++;
	for(i=1;i<n;i++){
		if(next!=k){
			next=people[next];
			count++;
		}
		else break;
	}
	if(count==n) cout<<"-1"<<endl;
	else cout<<count<<endl;
	return 0;
}

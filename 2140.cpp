#include <iostream>
using namespace std;

int solve(int n){
	int ans = 0;
	for(int i=1;i<n;i++){
		int sum = 0;
		for(int j=i;j<n && sum < n;j++){
			sum += j;
		}
		if(sum == n){
			ans++;
		}
	}
	return ans+1;
}


int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	cout<<solve(n)<<endl;	
	return 0;
}
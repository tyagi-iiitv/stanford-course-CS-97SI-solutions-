#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

bool isPrime[1000001];
void generate_primes(bool isPrime[], int len){
	isPrime[1]=false;
	isPrime[0]=false;
	for(int i=2;i<=sqrt(len);i++){
		if(isPrime[i]==true){
			for(int j=i*i;j<=len;j=j+i){
				isPrime[j]=false;
			}
		}
	}
}

void solve(int n, queue<int> ans){
	if(isPrime[n])
		ans.push(n);
	else
		for(int i=3; i<=n;i++){
			if(isPrime[i])
		}
}

int main(){
	ios::sync_with_stdio(false);
	fill_n(isPrime.begin(), isPrime.end(), true);
	generate_primes(isPrime, 1000001);
	int n;
	cin>>n;
	while(n != 0){
		queue<int> ans;
		solve(n, ans);
	}
	return 0;
}

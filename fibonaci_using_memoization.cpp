#include<bits/stdc++.h>
using namespace std;

int fibo_best(int n, int *arr){
	if(n<=1){
		arr[n] = n;
		return n;
	}
	
	if(arr[n-1]==0){
		arr[n-1] = fibo_best(n-1, arr);
	}
	if(arr[n-2]==0){
		arr[n-2] = fibo_best(n-2, arr);
	}
	arr[n] = arr[n-1]+arr[n-2];
	return arr[n];
}
int fibo_best(int n){
	int *arr = new int[n+1];
	for(int i=0; i<=n; i++){
		arr[i] = 0;
	}
	return fibo_best(n, arr);
}

int main(){
	int n;
	cin>>n;
	
	int ans = fibo_best(n);
	cout<<ans;
	return 0;
}

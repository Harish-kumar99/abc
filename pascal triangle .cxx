#include<iostream>
using namespace std;
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;}
	return fact;	
}
int c(int n,int r){
	int ans = fact(n)/(fact(n-r)*fact(r));
	return ans;		
}

int main(){
	int n;
	cin>>n;
	for(int i=0 ; i<n ;i++){
		for(int j=0; j<=i;j++){
			cout<<c(i,j);
			cout<<" ";}
			cout<<endl;}
	
	
	
	
	return 0;
	
	
	
}
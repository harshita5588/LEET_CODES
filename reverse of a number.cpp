#include <bits/stdc++.h>
using namespace std;


int rev(int n){
	int reverse=0;
	int rem;
	
	while(n>0){
		rem= n% 10;
		reverse = (reverse*10) + rem;
		
		n=n/10;
	}
	return reverse;
	
}


int main(){
	
	int n;
	cout<<"Enter the number you want the reverse of ";
	cin>>n;
	
	int result = rev(n);
	
	cout<<"reverse of "<<n<<" is "<<result;
}

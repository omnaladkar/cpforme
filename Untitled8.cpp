#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int n=2;n<=111;n++){
		int i;
		if(i%n==0){
			cout<<"It is not prime"<<endl;
			continue;
		}
		if(i=n){
			 cout<<"It is  a prime numnber"<<endl;
		}
		
	}
	 return 0;
	
	
}

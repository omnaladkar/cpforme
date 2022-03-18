#include<iostream>
using namespace std;

int main(){
	int i;
	for(i=1;i<=30;i++){
		if(i==3){
			continue;
		}
		if(i==5){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}

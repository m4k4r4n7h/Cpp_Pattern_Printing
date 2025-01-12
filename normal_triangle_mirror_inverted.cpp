#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the number: ";
	int i;cin>>i;
	for (int k=i;k>0;k--){
		 for(int n=i-k;n>0;n--){
		 	cout<<" ";
		 }
		for(int m = k;m>0;m--){
			cout<<"#";
		}
		
	cout<<"\n";
	}
return 0;
}

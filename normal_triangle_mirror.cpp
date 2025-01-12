#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the number: ";
	int i;cin>>i;
	for(int m = i;m>0;m--){
	
		for(int n = m-1;n>0;n--){
			cout<<" ";
		}
		for(int k = 0;k<=i-m;k++){
			cout<<"#";
		}
	cout<<"\n";
	}

return 0;
}

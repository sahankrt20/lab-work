#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	try{
		if(b==0){
			throw(b);
		}
		else{
			cout<<"The result is"<<a/b;
		}
	}
	catch(int x){
		cout<<"Divided by 0 not possible";
	}
	return 0;
}

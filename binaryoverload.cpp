#include <iostream>
using namespace std;
class ans{
	private:
		int x;
		int y;
	public:
		ans(int a,int b){
			x=a;
			y=b;
		}
		friend ans operator+(ans &obj1,ans &obj2);	
		void show(){
			cout<<"A \n "<<a<<"B\n"b;
		}
};
ans operator+(ans &obj1,ans &obj2){
	ans s(0,0);
	s.a=obj1.a+a.obj2;
	s.b=obj1.b+b.obj2;
}
int main(){
	ans obj1(10,20),obj2(20,30),obj3(0.0);
	obj3=obj1+obj2;
	obj3.show();
}


#include <iostream>
using namespace std;
class Cpolygon{
	protected:
		int base,height;
	public:
		void get_data(int a,int b){
			base=a;
			height=b;
		}
		virtual int calculate_data(){
			return 0;
		}
};
class Crectangle:public Cpolygon{
	public:
		int calculate_data(){
			return base*height;
		}
};
class Ctriangle:public Cpolygon{
	public:
		int calculate_data(){
			return base*height/2;
		}
};
int main(){
	Crectangle r;
	Ctriangle t;
	Cpolygon *c[]={&r,&t};
	for(int j=0;j<3;j++)
	c[j]->get_data(3,4); 
	cout<<"Figure drawn by base pounter are";
	for(int i=0;i<3;i++)
	cout<<c[i]->calculate_data();
	return 0;
}

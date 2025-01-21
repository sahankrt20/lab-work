#include <iostream>
using namespace std;
class student{
	public:
		virtual void show()=0;
};
class engineering :public student{
	public:
		void show(){
			cout<<"\n I am an engineering student";
		}
};
class medical:public student{
	public:
		void show(){
			cout<<"\n I am a medical student";
		}
};
class science:public student{
	public:
		void show(){
			cout<<"\n I am a science student";
		}
};
int main(){
	student *stu;
	engineering eg;
	stu=&eg;
	stu->show();
	medical md;
	stu=&md;
	stu->show();
	science sc;
	stu=&sc;
	stu->show();
	return 0;
}

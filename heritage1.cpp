#include<iostream>
using namespace std;

class Mother{
	public :
		
		void disp()
		{
			cout<<"my mother is housewife"<<endl;
		}
};

class Daugther : public Mother{
	public :
		
		void disp()
		{
			cout<<"my daugther study in s.p.g. school"<<endl;
		}
};

int main()
{
	Daugther d;
	d.M::disp();
	d.D::disp();
	return 0;
}
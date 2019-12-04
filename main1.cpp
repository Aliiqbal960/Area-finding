#include <iostream>
#include <string>
using namespace std;
class Area{
	public:
	int l,w,ar;
	setDim(){
		cout<<"Enter your length = ";
		cin>>l;
		cout<<"\nEnter your width = ";
		cin>>w;
		
	}
	getArea(){
		cout<<"\n\n\n_______________Your ans is_________________\n\n\n ";
		ar=l*w;
		cout<<"Your area is = "<<ar<<endl;
	}
};
int main(){
	Area a;
	a.setDim();
	a.getArea();
}

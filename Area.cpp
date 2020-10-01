#include<iostream>
using namespace std;
//base class
class shape{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
		protected:
			int width,height;
};
//derived class
class rectangle: public shape{
	public:
		getArea()
		{
			return (width*height);
		}
};
int main()
{
	rectangle Rect;
		Rect.setWidth(2);
		Rect.setHeight(4);
		//print the area of rectangle
		cout<<"total area: "<<Rect.getArea()<<endl;
}

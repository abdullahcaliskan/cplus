#include <iostream>
using namespace std;

const int COST_VALUE = 70;

// Base Class 
class Shape {
public:
	void setWidth(int w){
		this->width = w;
	}
	void setHeight(int h){
		this->height = h;
	}

protected:
	int height;
	int width;
};

// Class Definition
class PaintCost {
public:
	int getCost(int area){
		return area * COST_VALUE;
	}
};

class Rectangle : public Shape, public PaintCost{
public:
	int getArea(){
		return this->width * this->height;
	}
};

int main(){
	Rectangle Rect;
	int area;

	Rect.setHeight(10);
	Rect.setWidth(15);

	area = Rect.getArea();
	
	cout << "Rectangle Area : " << area << endl;
	cout << "Painting cost of area : " << Rect.getCost(area) << endl;
}
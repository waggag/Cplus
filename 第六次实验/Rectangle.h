#include "Point.h"

class Rectangle: public Point{
	public:
		initRectangle(float x,float y,float w,float h){
			initPoint(x, y);
			this->w = w;
			this->h = h;
		}
		
		float getW() const {return w;}
		float getH() const {return h;}
	
	private:		//新增私有成员 
		float w, h;
};

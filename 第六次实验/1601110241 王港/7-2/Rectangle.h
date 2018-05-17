#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"

class Rectangle: private Point{
	public:
		initRectangle(float x, float y, float w, float h){
			initPoint(x, y);
			this->w = w;
			this->h = h;
		}
		void move(float offX, float offY){
			Point::move(offX, offY);
		};
		
		float getX() const {return Point::getX();}
		float getY() const {return Point::getY();}
		
		float getW() const {return w;}
		float getH() const {return h;}
	
	private:		//新增私有成员 
		float w, h;
};
#endif 

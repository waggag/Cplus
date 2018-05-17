class Point{
	public:		//公有函数成员 
		void initPoint(float _x = 0,float _y = 0){
			x = _x;
			y = _y; 
		}
		
		void move(float offx, float offy){
			x += offx;
			y += offy;
		}
		
		float getX() const {return x;}
		float getY() const {return y;}
		
	
	private:	//私有数据成员 
		float x, y;
};

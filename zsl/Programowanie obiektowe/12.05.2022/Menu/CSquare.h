class CSquare
{
	public:
	double side;
	CSquare(){};
	CSquare(double a){
		side=a;
	}
	void setSide(double a){
		side=a;
	}
	double getSide(){
		return side;
	}
	double perimeter(){
		return 4 * side;
	}
	double area(){
		return side * side;
	}
	
};

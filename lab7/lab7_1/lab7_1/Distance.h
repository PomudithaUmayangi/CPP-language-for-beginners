#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	Distance(); //(same name with clz name) = constructor , special method inside a clz , define by a user a compiler, public(through that we define a objct from outside so we set as a public) ,to crrate objct , 
	Distance(int ft, float in); // overloaded constructor
	void inputDistance(); //
	void printDistance();

	~Distance(); // destructor


};


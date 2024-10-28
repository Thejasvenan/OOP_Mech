#ifndef B_H
#define B_H

#include"A.h"

class B : virtual public A //// This virtual inheritance ensures only one copy of A is inherited to D via B or C
{
private:
	int pvt_x_b;
protected:
	int prtd_y_b;

public:
	B();
	B(int, int, int =0);  //Making the third parameter default is just a choice becasue in this code the third parameter is to initialize the derived data member
	~B();
	void Show(); // The Show function of the base class has been overridden (NOT overload)
};

#endif

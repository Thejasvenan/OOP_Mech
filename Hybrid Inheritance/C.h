#ifndef C_H
#define C_H

#include"B.h"

class C : virtual public A // This virtual inheritance ensures only one copy of A is inherited to D via B or C
{
private:
	int pvt_x_c;
protected:
	int prtd_y_c;

public:
	C();
	C(int, int, int = 0, int = 0);  //Making the third parameter default is just a choice becasue in this code the third parameter is to initialize the derived data member
	~C();
	void Show(); // The Show function of the base class has been overridden (NOT overload)
};

#endif

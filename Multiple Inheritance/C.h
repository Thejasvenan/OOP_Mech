#ifndef C_H
#define C_H

#include"B.h"
#include"A.h"

class C : public B , public A   // The class is inherited from both A and B.
{
private:
	int pvt_x_c;
protected:
	int prtd_y_c;

public:
	C();
	C(int, int, int = 0, int = 0);  //Make the 3rd and 4th parameters default ones
	~C();
	void Show(); // The Show function of the base classe has been overridden (NOT overload)
};

#endif

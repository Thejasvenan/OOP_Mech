#ifndef D_H
#define D_H

#include"A.h"
#include"B.h"
#include"C.h"

class D : public B, public C
{
private:
	int pvt_x_d;
protected:
	int prtd_y_d;

public:
	D();
	D(int, int, int = 0, int = 0, int =0);  //Making the third parameter default is just a choice becasue in this code the third parameter is to initialize the derived data member
	~D();
	void Show(); // The Show function of the base class has been overridden (NOT overload)
};

#endif


#ifndef A_H
#define A_H

class A
{
private:
	int pvt_x_a;
protected:
	int prtd_y_a;

public:
	A();
	A(int, int);
	~A();
	void Show();
};

#endif

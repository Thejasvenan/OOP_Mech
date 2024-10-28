#pragma once
#include"parent.h"
class child : public parent // class “child” is publicly inherited from the class “parent”
{
private:
	int b;
public:
	child();
	~child();
	void show();
};
#ifndef RESULTS_H
#define RESULTS_H
#include "Marks.h"
class Results : public Marks
{
public:
	void PrintResults(); //Prints the name and marks of the student

private:
	void SetResults(); //Calculates the result of the student and save it in the data member
	char Result; //Holds the result of the student either 'P' or 'F'
};
#endif

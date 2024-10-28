#ifndef GRADES_H

#define GRADES_H 

class Grades
{
private:
	float Mathmarks;
	float Sciencemarks;
	char name[25];
	char Grademath;
	char Gradescience;
	char GetGrade(float);

public:
	Grades();
	void SetName(int);
	void SetMarks();
	void ShowResults();
	void SetGrade();
};
#endif
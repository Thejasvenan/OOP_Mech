#pragma once
class vector
{
private:
	double x, y, z;
public:
	vector(double, double, double); // Overloaded constructor
	vector();						// Default constructor
	void show();					// Function to display the vector
	vector operator+(vector);		// Retuns a vector object for sum of two vectors
	friend vector operator-(vector, vector);		// Returns a vector object for difference of two vectors
	vector operator*(double);		// Returns a vector object for product of a vector with a scalar
	friend vector operator*(double, vector);
	bool operator==(vector);        // Returns true if two vectors are equal
	vector operator+=(vector);		// Returns a vector object for sum of two vectors
};
/* 
Program: Assignment 0 - Heron's Triangle
Author: David Fitzpatrick
Date : 1/11/2019
Description: Calculates the area of a triangle using Heron's formula
*/

#include <stdio.h>
#include <math.h>

float heron(float, float, float);

int main(int argc, char** argv)
{
	// the sides of the triangle
	float a = 8.0, b = 3.0, c = 9.0;

	// calculate the area
	float area = heron(a, b, c);

	// print the output
	printf("The area of a triangle with sides %2.1f, %2.1f, and %2.1f is %2.1f\n", a, b, c, area);

	return 0;
}

/*
Description: Calculates the area of a triangle using Heron's formula
Parameters: 3 doubles representing sides of the triangle
Returns: Area of triangle
*/
float heron(float a, float b, float c) {
	float s = (a + b + c) / 2;

	float Asq = s * (s - a) * (s - b) * (s - c);
	return sqrt(Asq);
}

#include "Circle.h"
#define _USE_MATH_DEFINES
#include "math.h"

double Circle::size()
{
	double area = radius * radius * M_PI; // ‰~‚Ì–ÊÏ‚ÌŒvZ
	return area;
}

void Circle::draw()
{	
	double area = size();
	printf("‰~‚Ì–ÊÏF%.2lf\n", area); // –ÊÏ‚Ì’l‚ğo—Í
}
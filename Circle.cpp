#include "Circle.h"
#define _USE_MATH_DEFINES
#include "math.h"

double Circle::size()
{
	double area = radius * radius * M_PI; // �~�̖ʐς̌v�Z
	return area;
}

void Circle::draw()
{	
	double area = size();
	printf("�~�̖ʐρF%.2lf\n", area); // �ʐς̒l���o��
}
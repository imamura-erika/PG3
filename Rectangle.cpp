#include "Rectangle.h"

double Rectangle::size()
{
	int area = height * width; // ��`�̖ʐς̌v�Z
	return area;
}

void Rectangle::draw()
{
	int area = size();
	printf("��`�̖ʐρF%d\n", area); // �ʐς̒l�̏o��
}
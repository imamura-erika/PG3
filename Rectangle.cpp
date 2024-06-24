#include "Rectangle.h"

double Rectangle::size()
{
	int area = height * width; // 矩形の面積の計算
	return area;
}

void Rectangle::draw()
{
	int area = size();
	printf("矩形の面積：%d\n", area); // 面積の値の出力
}
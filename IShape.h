#pragma once
#include "stdio.h"

// ���N���X
class IShape
{
public:
	virtual double size() = 0; // �������z�֐�
	virtual void draw() = 0; // �������z�֐�
};
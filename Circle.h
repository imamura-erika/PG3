#pragma once
#include "IShape.h"

// �h���N���X Circle(�~)
class Circle :public IShape {
public:
	Circle(int radius) :radius(radius) {} // �R���X�g���N�^
	virtual double size() override; // �������z�֐��̃I�[�o�[���C�h
	virtual void draw() override; // �������z�֐��̃I�[�o�[���C�h

private:
	int radius;
};
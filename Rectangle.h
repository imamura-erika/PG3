#pragma once
#include "IShape.h"

// �h���N���X Rectangle(��`)
class Rectangle :public IShape {
public:
	Rectangle(int height, int width) :height(height), width(width) {} // �R���X�g���N�^
	virtual double size() override; // �������z�֐��̃I�[�o�[���C�h
	virtual void draw() override; // �������z�֐��̃I�[�o�[���C�h

private:
	int height; // ����
	int width; // ��
};
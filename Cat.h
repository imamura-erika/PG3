#pragma once
#include "Animal.h"

// �h���N���X �L
class Cat :public Animal {
public:
	Cat(); // �R���X�g���N�^
	virtual ~Cat(); // �f�X�g���N�^
	virtual void makeSound() override; // ���z�֐�

private:
};
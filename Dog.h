#pragma once
#include "Animal.h"

// �h���N���X ��
class Dog :public Animal {
public:
	Dog(); // �R���X�g���N�^
	virtual ~Dog(); // �f�X�g���N�^
	virtual void makeSound() override; // ���z�֐�

private:
};
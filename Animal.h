#pragma once
#include "stdio.h"

// ���N���X
class Animal
{
public:
	Animal(); // �R���X�g���N�^
	virtual ~Animal(); // �f�X�g���N�^
	virtual void makeSound(); // ���z�֐�

protected:
	const char* name;
};
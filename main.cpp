#include "Dog.h"
#include "Cat.h"

// �����̖���
int main() {
	Animal* animals[3];

	// �h���N���X���ƂɃC���X�^���X�𐶐�
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			animals[i] = new Dog; // ��
		else
			animals[i] = new Cat; // �L
	}

	// �o��
	for (int i = 0; i < 2; i++) {
		animals[i]->makeSound();
	}

	// ���
	for (int i = 0; i < 2; i++) {
		delete animals[i];

		return 0;
	}
}
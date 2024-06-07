#pragma once

// �e���v���[�g�^�̒�`
template <typename Type1, typename Type2>

class MinClass {
public:
	// �����o�ϐ�
	Type1 a;
	Type2 b;

	// �R���X�g���N�^
	MinClass(Type1 a, Type2 b) :a(a), b(b) {};

	// �����o�֐�
	// 2�̈����̒l���ׂď������l��Ԃ��֐�Min()
	auto Min() -> decltype((a < b) ? a : b) {
		if (a < b) { // a��b��菬�����ꍇ
			return a; // a��Ԃ�
		}
		else { // �����łȂ��ꍇ
			return b; // b��Ԃ�
		}
	}
};
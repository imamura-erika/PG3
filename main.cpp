#include <iostream>
#include <chrono>

int main() {
	// 100000�����̏�����
	std::string a(100000, 'a');

	// �R�s�[�̎��Ԍv��
	std::chrono::system_clock::time_point startCopy, endCopy;
	startCopy = std::chrono::system_clock::now(); // �v���J�n

	std::string b = a; // �R�s�[

	endCopy = std::chrono::system_clock::now(); // �v���I��
	// �����ɗv�������Ԃ��}�C�N���b�ɕϊ�
	auto elapsedCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();


	// �ړ��̎��Ԍv��
	std::chrono::system_clock::time_point startMove, endMove;
	startMove = std::chrono::system_clock::now(); // �v���J�n

	std::string c = std::move(a); // �ړ�

	endMove = std::chrono::system_clock::now(); // �v���I��
	// �����ɗv�������Ԃ��}�C�N���b�ɕϊ�
	auto elapsedMove = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();


	// �o��
	std::cout << "100,000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n";
	std::cout << "�R�s�[�F" << elapsedCopy << "��s\n";
	std::cout << "�ړ��F" << elapsedMove << "��s\n";
}
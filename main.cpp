#include <stdio.h>
#include <thread>

void thread1() { // thread1�֐�
	printf("thread1\n"); // �o��
};

void thread2() { // thread2�֐�
	printf("thread2\n"); // �o��
};

void thread3() { // thread3�֐�
	printf("thread3\n"); // �o��
};

int main() {

	// �}���`�X���b�h
	std::thread th1(thread1); // ���s
	th1.join(); // �X���b�h1���슮���҂�

	std::thread th2(thread2); // ���s
	th2.join(); // �X���b�h2���슮���҂�

	std::thread th3(thread3); // ���s
	th3.join(); // �X���b�h3���슮���҂�

	return 0;
}
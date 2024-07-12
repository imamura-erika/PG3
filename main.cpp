#include <stdio.h>
#include <thread>

void thread1() { // thread1関数
	printf("thread1\n"); // 出力
};

void thread2() { // thread2関数
	printf("thread2\n"); // 出力
};

void thread3() { // thread3関数
	printf("thread3\n"); // 出力
};

int main() {

	// マルチスレッド
	std::thread th1(thread1); // 実行
	th1.join(); // スレッド1動作完了待ち

	std::thread th2(thread2); // 実行
	th2.join(); // スレッド2動作完了待ち

	std::thread th3(thread3); // 実行
	th3.join(); // スレッド3動作完了待ち

	return 0;
}
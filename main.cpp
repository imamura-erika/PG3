#include "Dog.h"
#include "Cat.h"

// 動物の鳴き声
int main() {
	Animal* animals[3];

	// 派生クラスごとにインスタンスを生成
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			animals[i] = new Dog; // 犬
		else
			animals[i] = new Cat; // 猫
	}

	// 出力
	for (int i = 0; i < 2; i++) {
		animals[i]->makeSound();
	}

	// 解放
	for (int i = 0; i < 2; i++) {
		delete animals[i];

		return 0;
	}
}
#pragma once
#include "Animal.h"

// 派生クラス 犬
class Dog :public Animal {
public:
	Dog(); // コンストラクタ
	virtual ~Dog(); // デストラクタ
	virtual void makeSound() override; // 仮想関数

private:
};
#pragma once
#include "Animal.h"

// 派生クラス 猫
class Cat :public Animal {
public:
	Cat(); // コンストラクタ
	virtual ~Cat(); // デストラクタ
	virtual void makeSound() override; // 仮想関数

private:
};
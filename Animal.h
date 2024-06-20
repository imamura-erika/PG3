#pragma once
#include "stdio.h"

// 基底クラス
class Animal
{
public:
	Animal(); // コンストラクタ
	virtual ~Animal(); // デストラクタ
	virtual void makeSound(); // 仮想関数

protected:
	const char* name;
};
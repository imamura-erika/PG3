#pragma once
#include "stdio.h"

// 基底クラス
class IShape
{
public:
	virtual double size() = 0; // 純粋仮想関数
	virtual void draw() = 0; // 純粋仮想関数
};
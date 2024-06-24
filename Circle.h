#pragma once
#include "IShape.h"

// 派生クラス Circle(円)
class Circle :public IShape {
public:
	Circle(int radius) :radius(radius) {} // コンストラクタ
	virtual double size() override; // 純粋仮想関数のオーバーライド
	virtual void draw() override; // 純粋仮想関数のオーバーライド

private:
	int radius;
};
#pragma once
#include "IShape.h"

// 派生クラス Rectangle(矩形)
class Rectangle :public IShape {
public:
	Rectangle(int height, int width) :height(height), width(width) {} // コンストラクタ
	virtual double size() override; // 純粋仮想関数のオーバーライド
	virtual void draw() override; // 純粋仮想関数のオーバーライド

private:
	int height; // 高さ
	int width; // 幅
};
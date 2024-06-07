#pragma once

// テンプレート型の定義
template <typename Type1, typename Type2>

class MinClass {
public:
	// メンバ変数
	Type1 a;
	Type2 b;

	// コンストラクタ
	MinClass(Type1 a, Type2 b) :a(a), b(b) {};

	// メンバ関数
	// 2つの引数の値を比べて小さい値を返す関数Min()
	auto Min() -> decltype((a < b) ? a : b) {
		if (a < b) { // aがbより小さい場合
			return a; // aを返す
		}
		else { // そうでない場合
			return b; // bを返す
		}
	}
};
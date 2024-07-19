#include <iostream>
#include <chrono>

int main() {
	// 100000文字の初期化
	std::string a(100000, 'a');

	// コピーの時間計測
	std::chrono::system_clock::time_point startCopy, endCopy;
	startCopy = std::chrono::system_clock::now(); // 計測開始

	std::string b = a; // コピー

	endCopy = std::chrono::system_clock::now(); // 計測終了
	// 処理に要した時間をマイクロ秒に変換
	auto elapsedCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();


	// 移動の時間計測
	std::chrono::system_clock::time_point startMove, endMove;
	startMove = std::chrono::system_clock::now(); // 計測開始

	std::string c = std::move(a); // 移動

	endMove = std::chrono::system_clock::now(); // 計測終了
	// 処理に要した時間をマイクロ秒に変換
	auto elapsedMove = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();


	// 出力
	std::cout << "100,000文字を移動とコピーで比較しました。\n";
	std::cout << "コピー：" << elapsedCopy << "μs\n";
	std::cout << "移動：" << elapsedMove << "μs\n";
}
#include <stdio.h>
#include <list>

int main() {
	// 双方向リスト 
	// 初期化　山手線の駅名
	std::list<const char*> yamanoteLine
	{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	 "Uguisudani","Nippori","Tabata","Komagome","Sugamo",
	 "Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
	 "Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
	 "Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
	 "Hamamatsucho","Shimbashi","Yurakucho" };

	// 1970年の駅一覧を表示
	printf("1970年の駅一覧：\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n\n"); // 改行


	// 田端の前に西日暮里を挿入する
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 2019年の駅一覧を表示
	printf("2019年の駅一覧：\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n\n"); // 改行S


	// 田町の前に高輪ゲートウェイを挿入する
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// 2022年の駅一覧を表示
	printf("2022年の駅一覧：\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n"); // 改行


	return 0;
}
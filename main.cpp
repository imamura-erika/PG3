#include "stdio.h"
#include "MinClass.h"

int main() {
	// インスタンスの生成
	MinClass<int, int>b1(527, 74); // int, int
	MinClass<int, float>b2(11.4f, 51.4f); // int, float
	MinClass<int, double>b3(115.0, 526.0); // int, double
	MinClass<float, float>b4(11.4, 51.4f); // float, float
	MinClass<float, double>b5(115.0f, 526.0f); // float, double
	MinClass<double, double>b6(115.0, 526.0); // double, double


	// 出力
	printf("小さい値は：%d\n", b1.Min()); // int, int
	printf("小さい値は：%f\n", b2.Min()); // int, float
	printf("小さい値は：%lf\n", b3.Min()); // int, double
	printf("小さい値は：%f\n", b4.Min()); // float, float
	printf("小さい値は：%f\n", b5.Min()); // float, double
	printf("小さい値は：%lf\n", b6.Min()); // double, double

	return 0;
}
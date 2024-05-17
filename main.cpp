#include <stdio.h>
#include <list>

int main() {
	// �o�������X�g 
	// �������@�R����̉w��
	std::list<const char*> yamanoteLine
	{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	 "Uguisudani","Nippori","Tabata","Komagome","Sugamo",
	 "Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
	 "Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
	 "Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
	 "Hamamatsucho","Shimbashi","Yurakucho" };

	// 1970�N�̉w�ꗗ��\��
	printf("1970�N�̉w�ꗗ�F\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n\n"); // ���s


	// �c�[�̑O�ɐ����闢��}������
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 2019�N�̉w�ꗗ��\��
	printf("2019�N�̉w�ꗗ�F\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n\n"); // ���sS


	// �c���̑O�ɍ��փQ�[�g�E�F�C��}������
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// 2022�N�̉w�ꗗ��\��
	printf("2022�N�̉w�ꗗ�F\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%s, ", *itr);
	}
	printf("\n"); // ���s


	return 0;
}
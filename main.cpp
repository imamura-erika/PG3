#include "Enemy.h"

int main() {
    Enemy enemy;

    for (int i = 0; i < 3; ++i) {
        enemy.Update(); //更新の呼び出し
    }

    return 0;
}

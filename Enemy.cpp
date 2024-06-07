#include "Enemy.h"

// メンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::stateTable[])() = {
    &Enemy::approach,
    &Enemy::shot,
    &Enemy::leave
};

Enemy::Enemy() : phase_(Phase::Approach) {} //コンストラクタ

void Enemy::approach() {
    std::cout << "現在の状態：接近" << std::endl;
    phase_ = Phase::Shot; // 次のフェーズ(射撃)へ
}

void Enemy::shot() {
    std::cout << "現在の状態：射撃" << std::endl;
    phase_ = Phase::Leave; // 次のフェーズ(離脱)へ
}

void Enemy::leave() {
    std::cout << "現在の状態：離脱" << std::endl;
    phase_ = Phase::Approach; // 次のフェーズ(接近)へ
}

// 状態の更新
void Enemy::Update() {
    // 現在フェーズの関数を実行
    (this->*stateTable[static_cast<size_t>(phase_)])();
}


#include <stdio.h>
#include <iostream>

enum class Phase {
    Approach, //接近
    Shot, //射撃
    Leave //離脱
};

class Enemy {
public:
    Enemy(); //コンストラクタ

    // メンバ関数
    void approach(); //接近
    void shot(); //射撃
    void leave(); //離脱

    void Update(); //更新

private:
    // 現在のフェーズ
    Phase phase_;

    // メンバ関数ポインタのテーブル
    static void (Enemy::*stateTable[])();
};
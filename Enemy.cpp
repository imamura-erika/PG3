#include "Enemy.h"

// �����o�֐��|�C���^�e�[�u���̎���
void (Enemy::* Enemy::stateTable[])() = {
    &Enemy::approach,
    &Enemy::shot,
    &Enemy::leave
};

Enemy::Enemy() : phase_(Phase::Approach) {} //�R���X�g���N�^

void Enemy::approach() {
    std::cout << "���݂̏�ԁF�ڋ�" << std::endl;
    phase_ = Phase::Shot; // ���̃t�F�[�Y(�ˌ�)��
}

void Enemy::shot() {
    std::cout << "���݂̏�ԁF�ˌ�" << std::endl;
    phase_ = Phase::Leave; // ���̃t�F�[�Y(���E)��
}

void Enemy::leave() {
    std::cout << "���݂̏�ԁF���E" << std::endl;
    phase_ = Phase::Approach; // ���̃t�F�[�Y(�ڋ�)��
}

// ��Ԃ̍X�V
void Enemy::Update() {
    // ���݃t�F�[�Y�̊֐������s
    (this->*stateTable[static_cast<size_t>(phase_)])();
}


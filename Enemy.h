#include <stdio.h>
#include <iostream>

enum class Phase {
    Approach, //�ڋ�
    Shot, //�ˌ�
    Leave //���E
};

class Enemy {
public:
    Enemy(); //�R���X�g���N�^

    // �����o�֐�
    void approach(); //�ڋ�
    void shot(); //�ˌ�
    void leave(); //���E

    void Update(); //�X�V

private:
    // ���݂̃t�F�[�Y
    Phase phase_;

    // �����o�֐��|�C���^�̃e�[�u��
    static void (Enemy::*stateTable[])();
};
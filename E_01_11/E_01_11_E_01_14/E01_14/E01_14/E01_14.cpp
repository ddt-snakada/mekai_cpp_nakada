/*
�L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�����𐶐�����B
�L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95�`105�̐����l��\�����邱�ƁB
*/

#include<iostream> //�W�����o�͂�񋟂��郉�C�u����
#include<ctime>    //C�X�^�C���̎��Ԃ̕W�����C�u�������܂܂�Ă���
#include<cstdlib>  //�^�������𐶐�����rand() srand()���܂܂�Ă��郉�C�u����
using namespace std;

int main()
{
	srand(time(NULL));            //rand()�̎��ݒ肷��
	int random_int;               //-5�`5������ϐ�
	int enterd_int;               //���͂���鐮��������ϐ�
	random_int = (rand() % 11) - 5;  //0�`10�̗�������5���������Ƃɂ��-5�`5�̐��������
	cout << "�����l:";
	cin >> enterd_int;            //��������͂���B

	//���͂��ꂽ�ϐ���-5�`5�𑫂����͒l����}5�̗����𐶐����邱�Ƃ���������
	cout << "���̒l�́}5�̗����𐶐����܂����B�����" << enterd_int + random_int << "�ł��B";
}
//List2-5�̍Ō��else��else if (n==0)�ɕύX����Ƃǂ��Ȃ邩��������B

#include<iostream>

using namespace std;

int main()
{
	//list2-5�̎w��̂��߈ꕶ��
	int n;              
	//�����l���͂����Ȃ������߂̕\��
	cout << "�����l:";
	//n�ɐ�������͂���
	cin >> n;           

	//n��0���傫���ꍇ
	if (n > 0){
		//���ł��邱�Əo��
		cout << "���̒l�͐��ł��B\n";
	//n��0��菬�����ꍇ
	}else if (n < 0){
		//���ł��邱�Ƃ��o��
		cout << "���̒l�͕��ł��B\n";
	//���̕ύX�_�Bn��0�̏ꍇ
	}else if (n == 0){
		//0�ł��邱�Ƃ��o��
		cout << "���̒l��0�ł��B\n";
	}
}

//�l�@ 0���傫�����łȂ��A0��菬�������ł��Ȃ����͎̂���0�݂̂ł���Aelse����else if(n==0) �ɕύX���Ă����ʂ͕ς��Ȃ�
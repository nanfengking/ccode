#define _CRT_SECURE_NO_WARNINGS
//���������һ����������Ϸ
//��Ϊ����
//��һ�������������
//�ڶ������жϲµĶԲ���

//ͷ�ļ�
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//�����ǵ�һ��
void body()
{
	

	//�����
	int r = rand() % 100 + 1;

	//��֮����ڶ����ˣ�������
	int guess = 0;

	while (1)
	{
		printf("����ӣ���һ������1��100\n");
		scanf("%d", &guess);
			if (guess > r)
			{
				printf("��ɵ�ƣ�������´���\n");
			}
			else if (guess < r)
			{
				printf("��ɵ�ƣ��������С��\n");
			}
			else
			{
				printf("�¶��ˣ����������Ǹ����\n");
				break;
			}
	}


	
}

//body�����ˣ���ʼ�˵�

void menu()
{
	printf("----------------------------\n");
	printf("--------��1��ʼ------------\n");
	printf("--------��0�˳�------------\n");
	printf("----------------------------\n");


}

//���濪ʼ������

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand--��ʼ���������  unsigned int--ǿ��ת��time����
	//�����Ǵ�<time.h>�ļ����ҵ��ĺ���������
	//time_t time(time_t* t)
	//	�������п��Կ�����time()��������ֵ������������time_t�����ݸ�time()�����Ĳ�����ָ��time_t�������͵�ָ�롣
	// ���Ҳ�̫����ָ����ʲô��˼���������time_t���ͣ�ת��Ϊint
	//NULLָ���

	//��һ����do while���
	do
	{
		menu();
		printf("ѡ��:");
		scanf("%d", &input);
		switch (input)//����һ��switch���
		{
		case 1:
			body ();
			break;
		case 0:
			printf("��Ϸ���������ִ�ѧJLU\n");
			break;
		default:
			printf("�㼦�Ͷ������棬��tm�ǲ��Ǹ���\n");
			break;
		}
	} while (input);



	return 0;


}

//������12_2�ţ��ȼ������������ƣ���һ�㹦��
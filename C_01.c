#include <stdio.h>
//include : c��� include ������ �ǹ�
//stdio.h : Standard Input Output �⺻ ����� �ڵ� ��ġ


int main(void)
{
	/*printf("\tHello C!\n");
	printf("Hello World!\n");
	printf("ū����ǥ : \" \"\n");
	printf("��������ǥ : \' \'\n");
	printf("�������� : \\ \n");*/

	//int : �Լ��� ����� ������ (��� ����)
	//main : �Լ� �̸�
	//void : �Լ��� �Է� �� (void = ���� ���� ����.)(�Է�����)
	//printf : ����Լ�
	// ; : �ڵ� ���� ����
	//return : �Լ� ����
	// {} : �ڵ��(������)


	/* Ư�� ������ ����
	
	\n : ����
	\t : ������
	\\ : ��������(\)�� ���ڰ����� �ְ� ���� ��
	\" \" : ��°� �ȿ��� " �� ����ϰ���� ��
	\' : ��������ǥ ���
	\a : ����� �Ҹ� �߻�

	*/

	// �����Է��� ���Ĺ���
	//8���� ���� : %o
	//10���� ����(����,���) : �� %d, %i
	//16���� ���� : %x
	//�Ǽ� : �� %f, %lf
	//�Ѱ��� ����(char) : ��%c
	//���ڿ� : %s
	//10���� ����(���) : %u
	//�ۼ�Ʈ ��ȣ ��� : %%

	//printf("%d ���ϱ� %d�� %d�Դϴ�. \n", 3, 5, 3 + 5);  //3 ���ϱ� 5�� 8�Դϴ�.

	//printf("%d - %d = %d �Դϴ�.\n", 3, 5, 3 - 5);

	//printf("50�� 8���� ǥ�� : %o\n", 50);
	//printf("50�� 10���� ǥ�� : %d\n", 50);
	//printf("50�� 16���� ǥ�� : %x\n", 50);

	//scanf�Լ�
	//scanf_s([���Ĺ���], [������ ����]);

	//int input_num;
	//printf("�������� �Է����ּ��� : \n");
	//scanf_s("%d", &input_num);  //input_num�� �Է¹��� �� ����

	//printf("�Էµ� �������� %d �Դϴ�.", input_num); //�Է¹��� �� ���

	//����1) ����
	//int input_a;
	//int input_b;

	//printf("���� a���� �Է����ּ��� : \n");
	//scanf_s("%d", &input_a);

	//printf("���� b���� �Է����ּ��� : \n");
	//scanf_s("%d", &input_b);

	//printf("%d + %d = [%d] \n", input_a, input_b, input_a + input_b);
	//printf("%d - %d = [%d] \n", input_a, input_b, input_a - input_b);
	//printf("%d * %d = [%d] \n", input_a, input_b, input_a * input_b);
	//printf("%d / %d = [%lf] \n", input_a, input_b, (double)input_a / (double)input_b);  //������ �Ǽ� ����

	//����2)���� �������� �Է� �޾Ƽ� ���̸� ����ϴ� ���α׷�

	int r;
	double pi = 3.14;
	printf("�������� �Է��ϼ��� : \n");
	scanf_s("%d", &r);
	printf("���� ���̴� [%f]�Դϴ�.", (double)r * (double)r * pi);

	return 0;

}
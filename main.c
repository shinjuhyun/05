#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0;
	 
	printf("���ڿ��� �Է��ϼ���: \n");
	while((c = getchar() ) != '\n')//�Է� ���ڰ� ���๮�ڰ� ���ö����� �ݺ� 
	{
	    if(c >= '0' && c <= '9')//�Էµ� ���ڰ� (c) �� �����ΰ�
	       num = num + 1;	// �׷��ٸ� num�� �ϳ��� ����. 
	}
	
	printf("������ ������ %i�� �Դϴ�.\n", num);
	
	return 0;
}


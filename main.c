#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0;
	
	do
	{
	printf("Guess a number: ");//�Է��϶� ���� ���
	scanf("%d",&x);	//�Է��� ����
	if (x> answer)
	    printf("high!\n");
	else if (x < answer)
	    printf("low!\n");
	else 
	    printf("Congratulations!");	//�Է¼��ڰ� ���亸�� ū�� ������ ��� 
	trial++;
	}
	while(x!=59);
	    printf("Number of trial = %i\n", trial); 
	return 0;
}


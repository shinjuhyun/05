#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0;
	
	do
	{
	printf("Guess a number: ");//입력하라 문구 출력
	scanf("%d",&x);	//입력을 받음
	if (x> answer)
	    printf("high!\n");
	else if (x < answer)
	    printf("low!\n");
	else 
	    printf("Congratulations!");	//입력숫자가 정답보다 큰지 작은지 출력 
	trial++;
	}
	while(x!=59);
	    printf("Number of trial = %i\n", trial); 
	return 0;
}


//2. 학생 5명의 성적을 입력 받은 후, 평균점수와 최고 점수를 출력하는 프로그램을 작성 하시오.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[5] = { 0 };
	int max = 0;
	double ave = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		max += score[i];
	}

	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		if (temp < score[i])
			temp = score[i];
	}

	ave = (double)max / 5;
	printf("평균 : %.1f 최고점수 : %d\n", ave, temp);

	return 0;
}
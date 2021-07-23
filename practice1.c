//1. 사용자로부터 5개의 정수를 배열로 입력 받은 후 숫자 하나를 추가로 입력 받아 그 수가 배열에 몇개 존재하는 지를 출력하는
//프로그램을 작성하시오.
//2. 학생 5명의 성적을 입력 받은 후, 평균점수와 최고 점수를 출력하는 프로그램을 작성 하시오.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int number[5] = { 0 };
	int check = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &number[i]);
	}

	scanf("%d", &check);

	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		if (check == number[i])
			cnt++;
	}

	printf("%d\n", cnt);


	return 0;
}
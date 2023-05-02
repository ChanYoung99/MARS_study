#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int com, user;
	int cnt = 0;
	int play = 1;

	srand(time(NULL));
	com = rand() % 100 + 1; //1에서 100사이의 난수 생성 

	while (play == 1)
	{
		printf("<<1~100사이의 수를 입력해 주세요>>\n");
		scanf("%d", &user);


		while (user > 100 || user < 1)
		{
			printf("\n잘못된 입력입니다.\n<<<다시 입력 해주세요>>>\n");
			scanf("%d", &user);
		} //조건에 맞지않는 입력일 경우 다시 입력하게 함 
		if (user < 100 && user>1)
		{
			if (user > com)
			{
				printf("down!!\n\n");
				cnt++; //시도 횟수 카운트
			}
			else if (user < com)
			{
				printf("up!!\n\n");
				cnt++; //시도 횟수 카운트

			}
			else if (com == user)
			{
				cnt++; //시도 횟수 카운트
				printf("%정답입니다!!\n%d번째에 맞추셨습니다.", cnt);
				play = 0; //게임 종료 조건 
			}
		}
	}
}
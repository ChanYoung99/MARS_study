#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int com, user;
	int cnt = 0;
	int play = 1;

	srand(time(NULL));
	com = rand() % 100 + 1; //1���� 100������ ���� ���� 

	while (play == 1)
	{
		printf("<<1~100������ ���� �Է��� �ּ���>>\n");
		scanf("%d", &user);


		while (user > 100 || user < 1)
		{
			printf("\n�߸��� �Է��Դϴ�.\n<<<�ٽ� �Է� ���ּ���>>>\n");
			scanf("%d", &user);
		} //���ǿ� �����ʴ� �Է��� ��� �ٽ� �Է��ϰ� �� 
		if (user < 100 && user>1)
		{
			if (user > com)
			{
				printf("down!!\n\n");
				cnt++; //�õ� Ƚ�� ī��Ʈ
			}
			else if (user < com)
			{
				printf("up!!\n\n");
				cnt++; //�õ� Ƚ�� ī��Ʈ

			}
			else if (com == user)
			{
				cnt++; //�õ� Ƚ�� ī��Ʈ
				printf("%�����Դϴ�!!\n%d��°�� ���߼̽��ϴ�.", cnt);
				play = 0; //���� ���� ���� 
			}
		}
	}
}
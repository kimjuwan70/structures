#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct QUESTION {
	char question[SIZE];
	char item1[SIZE];
	char item2[SIZE];
	char item3[SIZE];
	char item4[SIZE];
	int solution;
};
struct QUESTION bank[100] = {
	{"�Ӻ���� ��ġ�� ���� ������ ���α׷��� ����?","1.���̽�","2.�ڹ�","3.C","4.�ڹٽ�ũ��Ʈ",3},
	{"���� �ٸ� �ڷ����� ���� �� �ִ� ������?","1.�迭", "2. ����", "3.����ü", "4.������"},
};
int main(void)
{
	int select, i;
	for (i = 0; i < 2; i++)
	{
		printf("%s\n", bank[i].question);
		printf("%s\n", bank[i].item1);
		printf("%s\n", bank[i].item2);
		printf("%s\n", bank[i].item3);
		printf("%s\n", bank[i].item4);
		scanf_s("%d", &select);
		if (select == bank[i].solution)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		
	}
	return 0;
}
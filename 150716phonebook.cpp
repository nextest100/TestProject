#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <iostream>
using namespace std;


typedef struct List
{
	int no = NULL;
	int *nextNode;
	int name = NULL;
};



List* newNode(int phoneno, int name, List *telephonelist)
{

	List* node = (List*)malloc(sizeof(List));
	node->no = phoneno;
	node->name = name;
	node->nextNode = NULL;

	return node;

}


int main()

{

	int selectnum = NULL;
	int phonenum = NULL;
	int name1 = NULL;

	List *telephonelist=NULL;
	int count = 0;

	while (1)
	{
		printf("\n 1.��ȭ��ȣ �Է�  2.��ȭ��ȣ ���  3.��ȭ��ȣ �˻�  4.��ȭ��ȣ ���� 5.��ȭ��ȣ ���� \n");
		printf("\n");
		printf("���ϴ� �۾��� ��ȣ�� �����ϼ��� ");
		scanf_s("%d", &selectnum);
		getchar();

		switch (selectnum)
		{
		case 1:
			if (selectnum==1)
			{
				printf("\n 1.��� �� ��ȭ��ȣ�� �Է��ϼ���");
				printf("\n");
				scanf_s("%d", &phonenum);
				printf("\n 1.��� �� �̸��� �Է��ϼ���");
				printf("\n");
				scanf_s("%d", &name1);

				telephonelist = newNode(phonenum, name1, telephonelist);
				printf("��ȭ��ȣ : %d\n", telephonelist->no);
				printf("�̸� : %d\n", telephonelist->name);
				break;
			}

		case 2:
			if (selectnum == 2)
			{
				  printf("\n 1.��ȸ�ϰ� ���� �̸��� �Է� �ϼ���: ");
				  scanf_s("%d", &name1);
	
				  while (telephonelist->nextNode = NULL)
				  {
			
					  if (name1 = telephonelist->name)
					  {
						  printf("��ȭ��ȣ : %d\n", telephonelist->no);
						  printf("�̸� : %d\n", telephonelist->name);
						  break;
		
					  }

				  }



			}
		}
	}

	return 0;


};
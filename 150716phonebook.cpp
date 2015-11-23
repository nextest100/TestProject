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
		printf("\n 1.전화번호 입력  2.전화번호 출력  3.전화번호 검색  4.전화번호 삽입 5.전화번호 삭제 \n");
		printf("\n");
		printf("원하는 작업의 번호를 선택하세요 ");
		scanf_s("%d", &selectnum);
		getchar();

		switch (selectnum)
		{
		case 1:
			if (selectnum==1)
			{
				printf("\n 1.등록 할 전화번호를 입력하세요");
				printf("\n");
				scanf_s("%d", &phonenum);
				printf("\n 1.등록 할 이름을 입력하세요");
				printf("\n");
				scanf_s("%d", &name1);

				telephonelist = newNode(phonenum, name1, telephonelist);
				printf("전화번호 : %d\n", telephonelist->no);
				printf("이름 : %d\n", telephonelist->name);
				break;
			}

		case 2:
			if (selectnum == 2)
			{
				  printf("\n 1.조회하고 싶은 이름을 입력 하세요: ");
				  scanf_s("%d", &name1);
	
				  while (telephonelist->nextNode = NULL)
				  {
			
					  if (name1 = telephonelist->name)
					  {
						  printf("전화번호 : %d\n", telephonelist->no);
						  printf("이름 : %d\n", telephonelist->name);
						  break;
		
					  }

				  }



			}
		}
	}

	return 0;


};
#include <stdio.h>
int Grade();
int main()
{
	Grade();
}

int Grade()
{
	printf("====================================\n");
	printf("The score is in between 0-100\n");
	printf("====================================\n");
	while (1)
	{
		int Grade;
		char again;

		printf("\ninput score = ");
		scanf("%d", &Grade);
		getchar();
		while (!Grade)
		{
			printf("Only integer numbers I TOLD YOU ALREADY!!!\n");
			printf("input score again = ");
			scanf("%d",&Grade);
			getchar();

		}
		
		if (Grade > 100)
		{
			printf("\nit's over the Grade");
		}
		else if (Grade >= 90)
		{
			printf("\nGrade A+");
		}
		else if (Grade >= 80)
		{
			printf("\nGrade A");
		}
		else if (Grade >= 70)
		{
			printf("\nGrade B+");
		}
		else if (Grade >= 60)
		{
			printf("\nGrade B");
		}
		else if (Grade >= 50)
		{
			printf("\nGrade C+");
		}
		else if (Grade >= 40)
		{
			printf("\nGrade C");
		}
		else if (Grade >= 30)
		{
			printf("\nGrade D+");
		}
		else if (Grade >= 20)
		{
			printf("\nGrade D");
		}
		else if (Grade >= 10)
		{
			printf("\nGrade F+");
		}
		else if (Grade >= 0)
		{
				printf("\nGrade F");
			}
	else{
		break;
	}

		printf("\nDo it again? (y or n):");
		scanf("%c", &again);
		switch (again)
		{
		case 'y':
			continue;
			break;
			default :
			printf("ok bye bye!!!");
			break;
		}
	break;
		}
	}


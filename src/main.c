#include <Elementary.h>

#include "game.h"


int main(int argc, char** argv)
{
	GameData *game;	

	game = calloc(1, sizeof(GameData));
	if(!game)
		return 0;

	game_init(game, argc, argv);
	elm_run();
	elm_shutdown();
	return 0;
}



#include <stdio.h>

int Answer;
int N[10];

typedef struct _point point;

struct _point
{
	int x;
	int y;
};

int abs_num(int i)
{
	if(i<0)
		return i*(-1);
	return i;
}

int findMaxSide(point p1, point p2)
{
	int i = abs_num(p1.x-p2.x);
	int j = abs_num(p1.y-p2.y);
	return (i>j)?i:j;
}

int algo(point input[], int i, int n)
{
	int ele, j, max1, max2, k;
//	int cnt = i;
	for(;i<n;i++)
	{
		max1 = max2 = 0;
		for(j=0;j<i;j++)
		{
			for(k=0; k<j; k++)
			{
				ele = findMaxSide(input[j], input[k]);
				if(ele>max1)
					max1 = ele;
			}
//			max1 = (ele>max1)?ele:max1;
//			printf("%d  %d  %d  %d\n",j, k, max1, ele);
		}
		for(j=i;j<n;j++)
		{
			for(k=i; k<j; k++)
			{
				ele = findMaxSide(input[j], input[k]);
				if(ele>max2)
					max2 = ele;
			}
//			max2 = (ele>max2)?ele:max2;
		}
		printf("%d\t%d\n", max1, max2);
	}
//	printf("%d\t%d\n", max1, max2);
	return Answer;
}

int main(void)
{
	int test_case,no_of_tests;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using scanf function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */
	// freopen("input.txt", "r", stdin);

	/*
	   If you remove the statement below, your program's output may not be rocorded
	   when your program is terminated after the time limit.
	   For safety, please use setbuf(stdout, NULL); statement.
	 */
	setbuf(stdout, NULL);

	/*
	   Program is given to the problem, test cases should be handled.		
                 If a test case is given to 10   ex) test_case < 10
	*/

	int i;
	point p[10];
	for(i=0; i<10; i++)
	{
		//p[i] = (point*)malloc(sizeof(point));
		scanf("%d", &p[i].x);
		scanf("%d", &p[i].y);
	}

	algo(p, 0, 10);

/*	scanf("%d", &no_of_tests);
	for(test_case = 0; test_case < 2; test_case++)
	{
*/		
		/*
			Read each test case from standard input.
			The number of node is N[0], N[1], ..., N[9]		
		 */
//		scanf("%d", &N[test_case]);		

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////
/*		Answer = 0;

		// Print the answer to standard output(screen).
		printf("Case #%d\n", test_case+1);
		printf("%d\n", Answer);
	}
*/
	return 0;//Your program should return 0 on normal termination.
}

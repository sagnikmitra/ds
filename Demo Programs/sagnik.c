#include<stdio.h>

int main(void)
{
	int q;
	int input;
	int fs;
	int init;

	int *states;
	int *inputs;
	int* finals;

	int** trans;

	int i;
	int j;

	printf("\n how many states:");
	scanf("%d", &q);
	states = (int*)malloc(q*sizeof(int));

	printf("\n Enter the states:");
	for(i = 0; i<q; i++)
		scanf("%d", &states[i]);


	printf("\n how many inputs:");
	scanf("%d", &input);
	inputs = (int*)malloc(input*sizeof(int));

	printf("\n Enter the inputs:");
	for(i = 0; i<input; i++)
		scanf("%d", &inputs[i]);

	printf("\n Enter the initial state:");
	scanf("%d", &init);

	printf("\n How many final states:");
	scanf("%d", &fs);

	finals = (int*)malloc(fs*sizeof(int));
	printf("\n Enter the final states:");
	for(i = 0; i<fs; i++)
		scanf("%d", &finals[i]);

	trans = (int**)malloc(q*sizeof(int*));
	 for(i = 0; i<q; i++)
	 {
		trans[i] = (int*) malloc(input*sizeof(int));
	 }

	for(i = 0; i<q; i++)
	{
		for(j = 0; j<input; j++)
		{
			printf("\n Enter the next state for del(%d, %d):", states[i], inputs[j]);
			scanf("%d", &trans[i][j]);
		}
	}

	printf("\n.......... The Input Automata Looks Like Below ...................\n ");
	printf("M = {");
	printf("{");
	for(i = 0; i<q; i++)
	{
		if(i <= q-2)
			printf("%d , ",states[i]);
		else
			printf("%d ",states[i]);
	}
	printf("},{");
	for(i = 0; i<input; i++)
	{
		if(i <= input-2)
			printf("%d , ",inputs[i]);
		else
			printf("%d ",inputs[i]);
	}
	printf("}, DEL, %d, {", init);
	for(i = 0; i<fs; i++)
	{
		if(i <= fs-2)
			printf("%d , ",finals[i]);
		else
			printf("%d ",finals[i]);
	}
	printf("}} Where DEL is like below\n");
	for(i = 0; i<input; i++)
	{
		printf("\t%d",inputs[i]);

	}
	printf("\n------------------------------------------\n");



	for(i = 0; i<q; i++)
	{
		printf("%d\t", states[i]);
		for(j = 0; j<input; j++)
		{
			printf("%d\t", trans[i][j]);

		}
		printf("\n");
	}


	return 0;
}

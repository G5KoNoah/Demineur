#include<stdio.h>
char** initGrid(int size, char** grid);
void printGrid(int size, char** grid);

void main()
{
	const int iSize = 10;

	char* inGrid[100];
	char** grid = initGrid(iSize, inGrid);
	printGrid(iSize, grid);
	grid[2] = "daaaaa";
	printGrid(iSize, grid);
};

char** initGrid(int size, char** grid)
{	
	for (int i = 0; i < size; i++)
	{
		for (int i = 0; i < size; i++)
		{
			grid[i] = " X ";

		}
	};

	return grid;
};

void printGrid(int size, char** grid)
{
	for (int i = 0; i < size; i++)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%s", grid[i]);

		}
		printf("\n");
	};
}
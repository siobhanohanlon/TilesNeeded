#include<stdio.h>

void main()
{
	//Declare Variables
	float totalWidth, tileWidth, gap, untiledSpace;
	int tiles, numTiles;

	//Ask user for width of room and tiles
	printf("Please Enter room width and tile width below\n");
	scanf("%f %f", &totalWidth, &tileWidth);

	//Calculate amount of full tiles needed for room
	numTiles = (totalWidth/tileWidth);

	//Check if odd or even as needs to be odd for a black tile at start and end
	if (numTiles%2 == 0)
	{
		tiles = numTiles - 1;
	}

	else
	{
		tiles = numTiles; 
	}

	//Find Gap
	untiledSpace = totalWidth-(tileWidth*tiles);
	gap = untiledSpace / 2;

	//Display number of tiles needed
	printf("Number of full tiles needed %d", tiles);

	//Display gap
	printf("\nGap in room at each side is %.2f\n\n", gap);
}
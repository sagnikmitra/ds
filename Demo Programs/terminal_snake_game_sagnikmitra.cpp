//A SNAKE GAME BY SAGNIK MITRA. ENVIRONMENT - VISUAL C++. IDE - VISUAL STUDIO CODE.
//STANDARD NOTATIONS - HEXADECIMAL CHARACTER VALUES USED FOR BOUNDARIES.

//windows.h for Setup(), Draw(), Logic() functions.
//conio.h is necessarily used for _kbhit() , _getch() functions.
#include <iostream>
#include <conio.h>
#include <windows.h>

//Arrow Keys Definition
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;
bool gameOver;
const int width = 40;
const int height = 20;
int x, y, fruitPosX, fruitPosY, score;
int tailX[100], tailY[100];
int nTail;

//predefined directions
enum eDirecton
{
	STOP = 0,
	LEFT,
	RIGHT,
	UP,
	DOWN
};

eDirecton dir;

//setup function
void Setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;

	//random food position in boundary
	fruitPosX = rand() % width;
	fruitPosY = rand() % height;
	score = 0;
}

//draw function
void Draw()
{
    //screen clear for every instance to transform into animation.
	system("cls"); //As I used windows to code it, i used "cls", if you are using debian or fedora, change it to: system("clear") ;

	//building the wall boundary & snake
	for (int i = 0; i < width + 2; i++)
		cout << "\xB2";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
		    //wall boundary building - leftmost wall
			if (j == 0)
				cout << "\xB2";

            //wall boundary building - top & bottom wall
			if (i == y && j == x)
				cout << "\xDB";

            //generating the food (\xB2) in then boundary in a random place which is previously randomized by the the setup() function
            else if (i == fruitPosY && j == fruitPosX)
				cout << "\xB2";
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "\xB1";
						print = true;
					}
				}
				if (!print)
					cout << " ";
                //wall boundary building - rightmost wall
                if (j == width - 1)
                    cout << "\xB2";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
		cout << "\xB2";
	cout << endl;
	cout << "Made by Sagnik Mitra\nLinkedIn: https://www.linkedin.com/in/sagnik-mitra-36742b178/ \nScore:" << score << endl;
}

//input function to access input from Keyboard,
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
        //a or left_arrow to go into left direction.
		case 'a':
			dir = LEFT;
			break;
        case KEY_LEFT:
			dir = LEFT;
			break;

        //d or right_arrow to go into right direction.
		case 'd':
			dir = RIGHT;
			break;
		case KEY_RIGHT:
			dir = RIGHT;
			break;

        //w or up_arrow to go into up direction.
        case 'w':
			dir = UP;
			break;
        case KEY_UP:
			dir = UP;
			break;

        //s or down_arrow to go into down direction
		case 's':
			dir = DOWN;
			break;
		case KEY_DOWN:
			dir = DOWN;
			break;

		//x for force quit.
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void Logic()
{
    //initializing the tail position before going to the position replacement.
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < nTail; i++)
	{
	    //the snakes moves in the direction by replacing it's previous index when the screen refreshes.
	    //the following is the switch.
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	//changing the snake's position (x & y axis) when allowed key_hit occurs
	switch (dir)
	{
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
	}
	if (x >= width)
		x = 0;
	else if (x < 0)
		x = width - 1;
	if (y >= height)
		y = 0;
	else if (y < 0)
		y = height - 1;

    //crashes to body or presses the reverse direction when moving towards a particular direction and game ends.
	for (int i = 0; i < nTail; i++)
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;

    //increasing the tail length when the snake eats the food (head_pos touches fruit_pos)
	if (x == fruitPosX && y == fruitPosY)
	{
		score += 10;
		fruitPosX = rand() % width;
		fruitPosY = rand() % height;
		nTail++;
	}
}
int main()
{
	Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(10); //sleep(10) for debian or fedora
	}
	return 0;
}

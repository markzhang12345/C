#include "game.h"




void InitBoard(char board[ROW][COL], int col, int row)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}


//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0;i < row; i++)
//	{
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		if(i<row -1)
//			printf("---|---|---\n");
//	}
//}  һ�۶��棬����Ϊ����

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row; i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");һ�۶��棬����Ϊ���
			int j = 0;
			for (j = 0;j < col;j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("�����>\n");

	while (1)
	{
		printf("����������>");
		scanf_s("%d %d", &x, &y);
		//�Ƿ�Ϸ�
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����ѱ�ռ�ã���������������\n");
		}
		else
		{
			printf("�Ƿ�����,����������\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;//%3������Ϊ0��2
		if (board[0][0] == board[0][1] && board[0][0] == '*')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[0][2] && board[0][0] == '*')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
				break;
			}
		}
		if (board[0][1] == board[0][2] && board[0][1] == '*')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[1][0] == board[1][1] && board[1][0] == '*')
		{
			if (board[1][2] = ' ')
			{
				board[1][2] = '#';
				break;
			}
		}
		if (board[1][0] == board[1][2] && board[1][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[1][2] && board[1][1] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
				break;
			}
		}
		if (board[2][0] == board[2][1] && board[2][0] == '*')
		{
			if (board[2][2] == ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[2][0] == board[2][2] && board[2][0] == '*')
		{
			if (board[2][1] == ' ')
			{
				board[2][1] = '#';
				break;
			}
		}
		if (board[2][1] == board[2][2] && board[2][1] == '*')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][0] == board[1][0] && board[0][0] == '*')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][0] == board[2][0] && board[0][0] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
				break;
			}
		}
		if (board[1][0] == board[2][0] && board[1][0] == '*')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[0][1] == board[1][1] && board[1][1] == '*')
		{
			if (board[2][1] = ' ')
			{
				board[2][1] = '#';
				break;
			}
		}
		if (board[0][1] == board[2][1] && board[0][1] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][1] && board[1][1] == '*')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
				break;
			}
		}
		if (board[0][2] == board[1][2] && board[0][2] == '*')
		{
			if (board[2][2] == ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[0][2] == board[2][2] && board[2][2] == '*')
		{
			if (board[1][2] == ' ')
			{
				board[1][2] = '#';
				break;
			}
		}
		if (board[1][2] == board[2][2] && board[2][2] == '*')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == '*')
		{
			if (board[2][2] = ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[2][2] && board[0][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][2] && board[1][1] == '*')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[0][2] == board[1][1] && board[0][2] == '*')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][2] == board[2][0] && board[2][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][0] && board[1][1] == '*')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[0][1] && board[0][0] == '*')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[0][2] && board[0][0] == '*')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
				break;
			}
		}
		if (board[0][1] == board[0][2] && board[0][1] == '*')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[1][0] == board[1][1] && board[1][0] == '*')
		{
			if (board[1][2] = ' ')
			{
				board[1][2] = '#';
				break;
			}
		}
		if (board[1][0] == board[1][2] && board[1][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[1][2] && board[1][1] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
				break;
			}
		}
		if (board[2][0] == board[2][1] && board[2][0] == '*')
		{
			if (board[2][2] == ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[2][0] == board[2][2] && board[2][0] == '*')
		{
			if (board[2][1] == ' ')
			{
				board[2][1] = '#';
				break;
			}
		}
		if (board[2][1] == board[2][2] && board[2][1] == '*')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][0] == board[1][0] && board[0][0] == '#')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][0] == board[2][0] && board[0][0] == '#')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
				break;
			}
		}
		if (board[1][0] == board[2][0] && board[1][0] == '#')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[0][1] == board[1][1] && board[1][1] == '#')
		{
			if (board[2][1] = ' ')
			{
				board[2][1] = '#';
				break;
			}
		}
		if (board[0][1] == board[2][1] && board[0][1] == '#')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][1] && board[1][1] == '#')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
				break;
			}
		}
		if (board[0][2] == board[1][2] && board[0][2] == '#')
		{
			if (board[2][2] == ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[0][2] == board[2][2] && board[2][2] == '#')
		{
			if (board[1][2] == ' ')
			{
				board[1][2] = '#';
				break;
			}
		}
		if (board[1][2] == board[2][2] && board[2][2] == '#')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == '#')
		{
			if (board[2][2] = ' ')
			{
				board[2][2] = '#';
				break;
			}
		}
		if (board[0][0] == board[2][2] && board[0][0] == '#')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][2] && board[1][1] == '#')
		{
			if (board[0][0] == ' ')
			{
				board[0][0] = '#';
				break;
			}
		}
		if (board[0][2] == board[1][1] && board[0][2] == '#')
		{
			if (board[2][0] == ' ')
			{
				board[2][0] = '#';
				break;
			}
		}
		if (board[0][2] == board[2][0] && board[2][0] == '#')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
				break;
			}
		}
		if (board[1][1] == board[2][0] && board[1][1] == '#')
		{
			if (board[0][2] == ' ')
			{
				board[0][2] = '#';
				break;
			}
		}
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//���Ӯ��*
//����Ӯ��#
//ƽ��Q
//��Ϸ����C

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < col;i++)
	{
		for (j = 0;j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0;i < col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}
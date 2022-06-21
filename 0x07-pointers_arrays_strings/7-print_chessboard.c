#include "main.h"
/**
 * print_chessboard - print_chessboard block
 * @a: point type character
 * Description: prints the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (col = 0; col < 8; col++)
	{
		row = 0;
		for (; row < 8; row++)
		{
			_putchar(a[col][row]);
		}
		_putchar('\n');
	}
}

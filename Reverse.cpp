#include "Stringsort_Head.h"

void strrev(char str[], int start, int end)
{
	char temp = 0;
	for (int i = 0; i < ((end - start + 1) / 2); i++)
	{
		temp = str[start + i];
		str[start + i] = str[end - i];
		str[end - i] = temp;
	}
}

//Reverse 
char *reverse(char str[], int n, int d)
{
	//CounterClockWise Rotation(반시계방향)
	if (d < 0)
	{
		d = -d;
		strrev(str, 0, d - 1);
		strrev(str, d, n - 1);
		strrev(str, 0, n - 1);
	}
	//ClockWise Rotation(시계방향)
	else
	{
		strrev(str, n - d, n - 1);
		strrev(str, 0, n - d - 1);
		strrev(str, 0, n - 1);
	}
	return str;
}
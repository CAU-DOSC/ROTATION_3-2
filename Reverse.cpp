#include "Stringsort_Head.h"


void strrev(char str[], int length)
{
	char temp = 0;
	for (int start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
}

//Reverse 
char *reverse(char str[], int n, int d)
{
	char *str1, *str2;
	//CounterClockWise Rotation(¹Ý½Ã°è¹æÇâ)
	if (d < 0)
	{
		d = -d;
		str1 = (char*)malloc(sizeof(char) * (d + 1));
		str2 = (char*)malloc(sizeof(char) * (n - d + 1));
		for (int a = 0; a < d; a++)
			str1[a] = str[a];
		for (int b = 0; b< n - d; b++)
			str2[b] = str[b + d];
		strrev(str1, d);
		for (int a = 0; a < d; a++)
			str[a] = str1[a];
		strrev(str2, n - d);
		for (int b = 0; b< n - d; b++)
			str[b + d] = str2[b];
		strrev(str, n);
	}
	//ClockWise Rotation(½Ã°è¹æÇâ)
	else
	{
		str1 = (char*)malloc(sizeof(char) * ((n - d) + 1));
		str2 = (char*)malloc(sizeof(char) * (n + 1));
		for (int a = 0; a < n - d; a++)
			str1[a] = str[a];
		for (int b = 0; b < d; b++)
			str2[b] = str[b + n - d];
		strrev(str1, n - d);
		for (int a = 0; a < n - d; a++)
			str[a] = str1[a];
		strrev(str2, d);
		for (int b = 0; b < d; b++)
			str[b + n - d] = str2[b];
		strrev(str, n);

		str1 = (char*)malloc(sizeof(char) * ((n - d) + 1));
		str2 = (char*)malloc(sizeof(char) * (n + 1));
		for (int a = 0; a < n - d; a++)
			str1[a] = str[a];
		for (int b = 0; b < d; b++)
			str2[b] = str[b + n - d];
		strrev(str1, n - d);
		for (int a = 0; a < n - d; a++)
			str[a] = str1[a];
		strrev(str2, d);
		for (int b = 0; b < d; b++)
			str[b + n - d] = str2[b];
		strrev(str, n);
	}
	return str;
}
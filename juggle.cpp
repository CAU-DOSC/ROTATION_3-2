//#include "Stringsort_Head.h"
//#include <math.h>

//�ִ����� ã�� �Լ�
/*int getGCD(int a, int b) {
	while (0 != b) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return abs(a);
}

char *juggling(char str[], int n, int d)
{
	int i, j, k, temp;

	// �ð�������� rotate
	if (d >= 0) {
		for (i = 0; i < getGCD(d, n); i++)
		{
			
			temp = str[i];
			j = i;
			while (1)
			{
				k = j - d;
				if (k < 0)
					k = k + n;
				if (k == i)
					break;
				str[j] = str[k];
				j = k;
			}
			str[j] = temp;
		}
	}

	//�ݽð�������� rotate
	if (d < 0) {
		for (i = 0; i < getGCD(d, n); i++)
		{
			
			temp = str[i];
			j = i;
			while (1)
			{
				k = j - d;
				if (k >= n )
					k = k - n;
				if (k == i)
					break;
				str[j] = str[k];
				j = k;
			}
			str[j] = temp;
		}
	}

	return str;
}
*/

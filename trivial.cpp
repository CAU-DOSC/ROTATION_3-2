#include "Stringsort_Head.h"

char *trivial(char str[], int n, int d) {

	char temp;
	if (d > 0) {
		for (int i = 0; i < d; i++) {
			temp = str[n - 1];
			for (int j = n - 1; j > 0; j--) {
				str[j] = str[j - 1];
			}
			str[0] = temp;
		}
	}
	else {
		for (int i = 0; i < -d; i++) {
			temp = str[0];
			for (int j = 0; j <n - 1; j++) {
				str[j] = str[j + 1];
			}
			str[n - 1] = temp;
		}
	}
	return str;
}


#include <stdio.h>

int main() {
	int n;/定义一个整型变量n/
	for (n = 100; n <= 200; n++) {
		if (n % 3 == 0)
			continue;
		printf("%d   ", n);
	}
	return 0;
}

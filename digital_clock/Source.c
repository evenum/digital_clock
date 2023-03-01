#include <stdio.h>
#include <Windows.h>


int main() {

	int h, m, s;
	h = s = 0;
	m = 58;

	while (1) {

		printf("%i : %i : %i \n", h, m, s);

		while (1)
		{
			Sleep(1000); // "Sleeps" program for one second
			s += 1;
			if (s > 59) {
				s = 0;
				m += 1;
			}
			if (m > 59) {
				s = 0;
				m = 0;
				h += 1;
			}
			if (h > 23)
			{
				s = 0;
				m = 0;
				h = 0;
			}
			printf("%02i : %02i : %02i \n", h, m, s);
		}
	}

	return 0;
}
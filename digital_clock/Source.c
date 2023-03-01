#include <stdio.h>
#include <Windows.h>


int main() {

	int h, m, s;
	h = m = s = 0;

	while (1)
	{
		

		Sleep(1000);         // "Sleeps" program for one second
		s++;				// and increments second counter by 1.

		// Checks how much time passed and updates time accurately.

		if (s > 59) {
			s = 0;
			m++;
		}
		if (m > 59) {
			s = 0;
			m = 0;
			h++;
		}
			if (h > 23)
		{
			s = 0;
			m = 0;
			h = 0;
		}

		printf("%02i : %02i : %02i \n", h, m, s);		
	}

	return 0;
}

	
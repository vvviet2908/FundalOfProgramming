#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int main(){

	int note10,note5,note2,note1;
	
	for (note10 = 0; note10 <= 3; ++note10)
		for (note5 = 0; note5 <= 6; ++note5)
			for (note2 = 0; note2 <= 15; ++note2)
				for (note1 = 0; note1 <= 30; ++note1)
					if (note10 * 10 + note5 * 5 + note2 * 2 + note1 == 30) {
						printf("%d notes of 10,000 VND +  %d notes of 5,000 VND + %d notes of 2,000 VND + %d notes of 1,000 VND\n", note10,note5,note2,note1);
					}
	return 0;
}

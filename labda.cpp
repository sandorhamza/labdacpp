#include <iostream>
#include <unistd.h>
#include <math.h>

using namespace std;

int main()
{		int width = 32;
		int height = 24;
		int x = 2;
		int y = 5;
		int i = 0;
		int j = 0;
		int iranyx=1, iranyy=1;

		while (true) {
			sleep(1);
			system("clear");
			x += iranyx;
			y += iranyy;
			if (x == 1) iranyx = 1;
			if (x == width-2) iranyx = -1;
			if (y == 1) iranyy = 1;
			if (y == height-2) iranyy = -1;

			for (i = 0; i < width; i++) {
				cout << "_";
			}
			cout << endl;
			for (i = 0; i < height-2; i++) {
				cout << "|";
				for (j = 0; j < width - 2; j++) {
					if (i == y-1 && j == x-1)cout << "O";
					else cout << " ";
				}
				cout << "|";
				cout << endl;
			}
			for (i = 0; i < width; i++) {
				cout << "_";
			
			}
			cout << endl;
		}
}
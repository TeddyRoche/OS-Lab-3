//int argc, char* argv[]
#include <thread>
#include <iostream>
#include <stdio.h>
using namespace std;

int number[] = {1, 2, 3, 4, 5, 6};
void num(int x){
	float average = 0, total = 0;
	for (int a = 0; a < number[x]; a++) {
		total = total + number[x];
	}
	cout << "   " << total << endl;
	average = total / x;
	cout << "   " << average << endl;
}

class thread_num {
public:
	void operator()(int y)
	{
		y = 0;
		while (y < number[y]) {
			if (number[y] < number[y + 1])
			{
				y++;
			}
			else if (number[y] > number[y + 1]) {
				cout << "The Biggest number is: " << number[y] << endl;
				break;
			}

		}
	} 
};



int main()
{

	thread th1(num, 5);

	thread th2(thread_num(), 0);


	auto f = [](int z) {
		z = 0;
		while (z > number[z]) {
			if (number[z] < number[z + 1])
			{
				z++;
			}
			else if (number[z] < number[z + 1]) {
				cout << "The Smallest number is: " << number[z] << endl;
				break;
			}

		}
	};

thread th3(f, 1);

th1.join();

th2.join();

th3.join();

return 0;

}
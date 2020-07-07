/*#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

//to sort we need to add an include
#include <algorithm>

using namespace std;

bool DescCompare(int a, int b);

int main() {

	cout << "Sorting numbers by using Vector lib" << endl;

	srand(time(NULL));

	const int Max = 20;
	const int Random_Max = 100;

	vector<int> intVec;

	intVec.reserve(Max);

	cout << "Random list of numbers: " << endl << endl;

	for (int i = 0; i < Max; i++) {
		int x = rand() % Random_Max;
		intVec.push_back(x);

		cout << x << endl;
	}
	// sorting the vectors

	//if we remove DescCompare then the list goes from small to big 
	//if we keep the DescCompare there then it sorts from the biggest vallue to the smallest
	sort(intVec.begin(), intVec.end(), DescCompare);

	cout << "\nLets sort the list above: " << endl << endl;
	for (int i = 0; i < Max; i++) {
		cout << intVec[i] << endl;
	}

	return 0;
}

bool DescCompare(int a, int b)
{
	return a > b;
}*/
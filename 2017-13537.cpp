#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	vector<int> NumberList;
	int num;

	while (cin >> num) 
	{
		NumberList.push_back(num);

	}

	sort(NumberList.begin(), NumberList.end());

	cout << "ordered array" << endl;

	for (vector<int>::size_type i = NumberList.size() - 1; i != -1; --i)
	{
		auto number = NumberList[i];
		cout << number << " ";
	}

	cout << endl;


}
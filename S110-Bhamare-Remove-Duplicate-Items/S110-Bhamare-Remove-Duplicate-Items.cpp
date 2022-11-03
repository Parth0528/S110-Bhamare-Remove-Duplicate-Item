// S110-Bhamare-Remove-Duplicate-Items.cpp 
//Author: P.Bhamare
//Goal: Create an app that removes duplicate items from a vector

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <int> v = { 11, 33, 22,11,44, 77, 66, 33, 55, 11 };
	
	for (int i = 0; i < v.size(); i++) {
		int target = v[i];
		int j = i + 1;
		for ( j; j < v.size(); j++) {
			if (v.at(j) == target) {
				v.erase(v.begin()+j);
			}

		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}



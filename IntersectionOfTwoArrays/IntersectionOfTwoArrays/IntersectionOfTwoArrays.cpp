// IntersectionOfTwoArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include"IntersectionOfTwoArrays.h"

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> vec1(m), vec2(n);
	for (int i = 0; i < m; i++)
		cin >>vec1[i];
	for (int j = 0; j < n; j++)
		cin >>vec2[j];
	IntersectionOfTwoArrays vec;
	vector<int> res(vec.GetIntersection(vec1, vec2));
	if (res.empty())
		cout << "No Intersection!" << '\n';
	else {
		for (vector<int>::iterator it = res.begin(); it != res.end(); it++)
			cout << *it << " ";
		cout << '\n';
	}
	exit(0);
    return 0;
}


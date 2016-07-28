#pragma once
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class IntersectionOfTwoArrays {
public:
	vector<int> GetIntersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> sorted1(nums1.begin(), nums1.end()),
			sorted2(nums2.begin(), nums2.end());
		vector<int> result;
		for (set<int>::iterator it1 = sorted1.begin(),
			it2 = sorted2.begin();
			it1 != sorted1.end()
			&& it2 != sorted2.end(); it1++, it2++)
		{
			while (it1 != sorted1.end()
				&& it2 != sorted2.end()
				&& *it1 != *it2)
			{
				while (it1 != sorted1.end()
					&& *it1 < *it2)
					it1++;
				if (it1 == sorted1.end())
					break;
				while (it2 != sorted2.end()
					&& *it2 < *it1)
					it2++;
			}
			if (it1 == sorted1.end()
				|| it2 == sorted2.end())
				break;
			result.push_back(*it1);
		}

		return result;
	}
};
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> res;
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_set<int>set;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			set.insert(*it);
		}
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			if (set.count(target - *it)) {
				res.push_back(distance(nums.begin(), it));
				res.push_back(distance(nums.begin(), find(nums.begin(), nums.end(), target - *it)));
				if (res[0] == res[1]) {
					res.pop_back();
					res.pop_back();
					continue;
				}
				return res;
			}
		}
	}
};

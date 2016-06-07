class Solution {
public:
vector<int> findElement(vector<int> array, int element)
{
	vector<int> result;
	for (int i = 0, j = 0; i < array.size(); i++)
	{
		if (element == array[i])
		{
			j++;
			result.push_back(i);
			if (j == 2)
				return result;
		}
	}
	return result;
}

vector<int> twoSum(vector<int>& nums, int target) {
    if(target % 2 == 0 && count(nums.begin(), nums.end(), target /2) == 2)
    {
        
    }
		if (target % 2 == 0 && count(nums.begin(), nums.end(), target / 2) == 2)
	{
		return findElement(nums, target / 2);
	}
	map<int, int> data;
	vector<int> result;
	int i = 0;
	for (auto it = nums.cbegin(); it != nums.cend(); it++)
		data.insert(make_pair(*it, i++));
	for (auto it = data.cbegin(); it != data.cend(); it++)
	{
		auto r = data.find(target - it->first);
		if (r != data.end())
		{
			int x = it->second;
			int y = r->second;
			if (x < y)
				result = { x,y };
			else
				result = { y,x };
			return result;
		}
	}
	return result;
}
};
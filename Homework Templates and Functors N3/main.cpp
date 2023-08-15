#include <iostream>
#include <vector>
#include <algorithm>

class Digits
{
	int sum;
	int count;
public:
	Digits()
	{
		sum = 0;
		count = 0;
	}
	void operator()(int elem)
	{
		if (elem % 3 == 0)
		{
			sum += elem;
			count += 1;
		}
	}
	int get_sum()
	{
		return sum;
	}
	int get_count()
	{
		return count;
	}
};

int main()
{
	Digits digits;
	std::vector<int>vector = { 4, 1, 3, 6,25, 54 };
	std::for_each(vector.begin(), vector.end(), std::ref(digits));
	std::cout << digits.get_sum() << " " << digits.get_count();
	return 0;
}
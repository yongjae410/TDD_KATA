#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> result = { };

		for (int dividor = 2; num > 1; dividor++)
		{
			while(num % dividor == 0)
			{
				result.push_back(dividor);
				num = num / dividor;
			}
		}

		return result;
	}
};
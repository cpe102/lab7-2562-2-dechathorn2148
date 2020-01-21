#include <iostream>
using namespace std;

int main()
{
	string status;
	int age;
	float height;
	int legacy;
	cout << "Enter your age : ";
	cin >> age;
	if(age <= 20)
	{
		cout << "Enter your height : ";
		cin >> height;
		if(height < 160)
		{
			status = "UNFRIEND";
		}
		else
		{
			if(height < 175)
			{
				status = "FRIEND";
			}
			else
			{
				cout << "Enter your legacy : ";
				cin >> legacy;
				if(legacy >= 69000000)
				{
					status = "MARRIED";
				}
				else
				{
					status = "ONE NIGHT STAND";
				}
			}
		}
	}
	else
	{
		if(age <= 30)
		{
			cout << "Enter your legacy : ";
			cin >> legacy;
			if(legacy >= 10000000)
			{
				status = "BEST FRIEND";
			}
		}
		else
		{
			status = "UNFRIEND";
		}
	}
	cout << status;
	return 0;
}
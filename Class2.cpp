#include <iostream>
using namespace std;
class flight
{
private:
	int fight_num;
	float destination, distance, fuel;
	char s_name[10];
	float calFuel()
	{
		if (distance <= 1000)
		{
			fuel = 500;
		}
		else if (distance > 1000 && distance <= 1800)
		{
			fuel = 900;
		}
		else if (distance > 1800 && distance <= 2200)
		{
			fuel = 1100;
		}
		else
		{
			fuel = 1300;
		}
		return fuel;
	}
public:
	flight()
	{
		cout << "ENTER FLIGHT NUMBER: ";
		cin >> fight_num;
		cout << "ENTER NAME: ";
		cin >> s_name;
		cout << "ENTER DESTINATION: ";
		cin >> destination;
		cout << "ENTER DISTANCE: ";
		cin >> distance;
	}
	void showdata()
	{
		cout << "ENTER FLIGHT NUMBER: "<<fight_num<<endl;
		cout << "ENTER DESTINATION: "<<destination<<endl;
		cout << "ENTER DISTANCE: "<<distance<<endl;
		cout << "ENTER NAME: "<<s_name<<endl;
		cout << "FUEL REQUIRED: " << calFuel();
	}
};
int main()
{
	//flight fly;
	//fly.showdata();
	flight* ptr;
	flight fly;
	ptr = &fly;
	ptr->showdata();
	return 0;
}
#include <iostream>
using namespace std;
class student
{
private:
	int ad_num;
	float eng_m, math_m, science_m, tot_marks;
	char s_name[10];
	float ctotal()
	{
		float tot_marks= eng_m + math_m + science_m;
		return tot_marks;
	}
public:
	student()
	{
		cout << "ENTER ADMISSION NUMBER: ";
		cin >> ad_num;
		cout << "ENTER STUDENT NAME: ";
		cin >> s_name;
		cout << "ENTER ENGINEERING MATH: ";
		cin >> eng_m;
		cout << "ENTER MATH MARKS: ";
		cin >> math_m;
		cout << "ENTER SCIENCE MARKS: ";
		cin >> science_m;
	}
	void show()
	{
		cout << "ADMISSION NUMBER: "<<ad_num<<endl;
		cout << "STUDENT NAME: " <<s_name<< endl;
		cout << "ENGINEERING MATH: "<<eng_m<<endl;
		cout << "MATH MARKS: "<<math_m<<endl;
		cout << "SCIENCE MARKS: "<<science_m<<endl;
		cout <<"TOTAL MARKS: " <<ctotal();
	}
};
int main()
{
	//student stu;
	//stu.show();
	student* ptr;
	student stu;
	ptr = &stu;
	ptr->show();
	return 0;
}
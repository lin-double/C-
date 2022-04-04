#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	cout << "str1= " << str1 << endl;
	const char* str = "Hellow world!";
	string str2(str);
	cout << "str2= " << str2 << endl;

	string str3(str2);
	cout << "str3= " << str3 << endl;
	string str4(10 ,'a');
	cout << "str4= " << str4 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}

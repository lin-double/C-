#include<iostream>
using namespace std;

void test01()
{
	int a = 10;
	int &b = a;
	
	cout << "a��ֵΪ��" << a << endl;

	cout << "b��ֵΪ��" << b << endl;

	b = 100;
	cout << "a��ֵΪ��" << a << endl;
	cout << "b��ֵΪ��" << b << endl;
}
void test02()
{
	int a = 10;
	int b = 20;
	int &c = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	c = b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}

int test03(int a,int b=10,int c=10) {
	return a + b + c;
}
//int main()
//{
//	//test01();
//	//test02();
//	cout << "ref=" << test03(10) << endl;
//	cout << "ref=" << test03(10,20,30) << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<stdio.h>

class Rent{
public:
	void useCar(int useNum);
	void retCar(int retNum);
	Rent();
private:
	int Free;

};

Rent::Rent()
{
	Free = 20;

}

void Rent::useCar(int useNum)
{
	if (Free >= useNum)
		Free -= useNum;
}

void Rent::retCar(int retNum)
{
	if ((Free + retNum) <= 20)
		Free += retNum;
}

int main()
{
	Rent Osaka;

	Osaka.useCar(5);
	printf("�c��䐔:%d��\n", Osaka);

	Osaka.retCar(3);
	printf("�c��䐔:%d��\n", Osaka);

	Osaka.retCar(3);
	printf("�c��䐔:%d��\n", Osaka);

	Osaka.useCar(18);
	printf("�c��䐔:%d��\n", Osaka);

}

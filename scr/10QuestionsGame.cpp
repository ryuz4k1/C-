#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x, y, z;
	x = y = z = 0;
	char ch1[100], ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11;
	cout << "Dear Guest Please Enter Your Name : ";
	cin >> ch1;
	cout << "|------------------WELCOME------------------| \n" << ch1 << endl;
	cout << "Enter answer in form of 'a', 'b' and'c'only." << endl;
	cout << "LETS START" << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "What is called as ' THE HOLYLAND'? " << endl;
	cout << "a.Jerusalem" << endl;
	cout << "b.Mathura" << endl;
	cout << "c.Mecca" << endl;
	cin >> ch2;
	if (ch2 == 'a')
	{
		x = x + 10;
		cout << "Good Job.Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "What is called as ' THE ROOF OF THEWORLD'?" << endl;
	cout << "a.Nepal" << endl;
	cout << "b.Rome" << endl;
	cout << "c.Tibet" << endl;
	cin >> ch2;
	if (ch2 == 'c')
	{
		x = x + 10;
		cout << "Good Job.Your score is " << x << endl;

	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;


	cout << "What is called as ' THE LAND OF RISINGSUN'?" << endl;
	cout << "a.Chicago" << endl;
	cout << "b.Japan" << endl;
	cout << "c.Tibet" << endl;
	cin >> ch2;
	if (ch2 == 'b')
	{
		x = x + 10;
		cout << "Good Job.Your score is " << x << endl;


	}
	else

		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;

	cout << "What is called as ' THE GIFT OF NILE'?" << endl;
	cout << "a.Chicago" << endl;
	cout << "b.Egypt" << endl;
	cout << "c.Africa" << endl;
	cin >> ch2;
	if (ch2 == 'b')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "What is called as ' THE LAND OF MIDNIGHTSUN'?" << endl;
	cout << "a.Norway" << endl;
	cout << "b.Japan" << endl;
	cout << "c.Australia" << endl;
	cin >> ch2;
	if (ch2 == 'a')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "What is called as ' THE LAND OF THUNDERBOLT'?" << endl;
	cout << "a.Bhutan" << endl;
	cout << "b.Canada" << endl;
	cout << "c.Arab" << endl;
	cin >> ch2;
	if (ch2 == 'a')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;

	cout << "What is called as ' THE WINDYCITY ?" << endl;
	cout << "a.Jerusalem" << endl;
	cout << "b.Japan" << endl;
	cout << "c.Chicago" << endl;
	cin >> ch2;
	if (ch2 == 'c')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;

	cout << "What is called as ' THE LAND OF WHITE ELEPHANTS'?" << endl;
	cout << "a.Bangladesh" << endl;
	cout << "b.Thailand" << endl;
	cout << "c.India" << endl;
	cin >> ch2;
	if (ch2 == 'b')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;

	cout << "What is called as ' THE CITY OF SEVEN HILLS'?" << endl;
	cout << "a.Rome " << endl;
	cout << "b.Nilgiri Hills" << endl;
	cout << "c.Tibet" << endl;
	cin >> ch2;
	if (ch2 == 'a')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;


	}
	else
		cout << "Sorry wrong answer." << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "What is called as ' THE DARK CONTIENENT'?" << endl;
	cout << "a.Asia" << endl;
	cout << "b.Australia" << endl;
	cout << "c.Africa" << endl;
	cin >> ch2;
	if (ch2 == 'c')
	{
		x = x + 10;
		cout << "Your score is " << x << endl;

	}
	else
		cout << "Sorry wrong answer." << endl;
	if (x == 100)
		cout << "No cheating...... You have done this earlier also." << endl;
	if (x == 90)
		cout << "You are extremely intelligent Your Score is 90" << endl;
	if (x == 80)
		cout << "You are intelligent Your Score is 80" << endl;
	if (50 == x || x == 70 || x == 60)
		cout << "You are average Your Score is " << x << ".Better luck next time" << endl;
	else if (x <= 40)
		cout << "No use........ Not even 5 questions right" << endl;
	cout << "|--------------------------------------------------|" << endl;

	system("pause");
	return 0;
}

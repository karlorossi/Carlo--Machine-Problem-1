#include <iostream>
#include <string>
using namespace std;

double freshman = 1500, sophomore = 1800, junior = 2000, senior = 2300, tuitionfee, balance, downpayment, downpayment1 = 0.3;
string name, course, fresh, soph, juni, seni;
int year, units;



int main()
{


cout << "Enter your name: ";
getline (cin, name);
cout << "Enter your course: ";
getline (cin, course);
cout << "Enter your year-level: ";
cin >> year;
cout << "Enter total units: ";
cin >> units;

switch(year)
{
    case 1:
    {
        tuitionfee = units * freshman;
        downpayment = tuitionfee * downpayment1;
        balance = tuitionfee - downpayment;
       
        cout<< "\n\n\n\n\n\nENROLLMENT SLIP\n\n";
        cout << "Student Name      : " <<name<< "\n";
        cout << "Program/Course    : " << course<< "\n";
        cout << "Year Name         : Freshman\n";
        cout << "No. of Units      : " <<units<< "\n";
        cout << "Tuition Fee       : " << tuitionfee<< "\n";
        cout << "Down Payment      : " << downpayment<< "\n";
        cout << "Balance           : " <<balance<< "\n\n\n";
        break;
    }
    case 2: 
    {
        tuitionfee = units * sophomore;
        downpayment = tuitionfee * downpayment1;
        balance = tuitionfee - downpayment;
       
        cout<< "\n\n\n\n\n\nENROLLMENT SLIP\n\n";
        cout << "Student Name      : " <<name<< "\n";
        cout << "Program/Course    : " << course<< "\n";
        cout << "Year Name         : Sophomore\n";
        cout << "No. of Units      : " <<units<< "\n";
        cout << "Tuition Fee       : " << tuitionfee<< "\n";
        cout << "Down Payment      : " << downpayment<< "\n";
        cout << "Balance           : " <<balance<< "\n\n\n";
        break;
    }
    case 3:
    {
        tuitionfee = units * junior;
        downpayment = tuitionfee * downpayment1;
        balance = tuitionfee - downpayment;
       
        cout<< "\n\n\n\n\n\nENROLLMENT SLIP\n\n";
        cout << "Student Name      : " <<name<< "\n";
        cout << "Program/Course    : " << course<< "\n";
        cout << "Year Name         : Junior\n";
        cout << "No. of Units      : " <<units<< "\n";
        cout << "Tuition Fee       : " << tuitionfee<< "\n";
        cout << "Down Payment      : " << downpayment<< "\n";
        cout << "Balance           : " <<balance<< "\n\n\n";
        break;
    }
    case 4:
    {
        tuitionfee = units * senior;
        downpayment = tuitionfee * downpayment1;
        balance = tuitionfee - downpayment;
       
        cout<< "\n\n\n\n\n\nENROLLMENT SLIP\n\n";
        cout << "Student Name      : " <<name<< "\n";
        cout << "Program/Course    : " << course<< "\n";
        cout << "Year Name         : Senior\n";
        cout << "No. of Units      : " <<units<< "\n";
        cout << "Tuition Fee       : " << tuitionfee<< "\n";
        cout << "Down Payment      : " << downpayment<< "\n";
        cout << "Balance           : " <<balance<< "\n\n\n";
        break;
    }

    

}

}
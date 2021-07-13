#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

/*int main(){
	cout.precision(5);
	cout.setf(ios::fixed);
	cout << setw(2) << 3.1456789 << endl;


	cout << "/n /n Hello, here is me trying to practice how to create arrays.";

}*/

int main(){
	string name;
	int no_of_courses;
	string course_code;
	vector <string> course_list;
	vector <int> course_units;
	vector <char> course_grades;
	char grade;
	int unit;
cout << "Welcome to the CGPA Calculator. It's nice to have you here. \n" << "To get started, please enter your name: ";
getline(cin, name);
cout << "\nNow, enter the number of courses you offered for the particular semester under consideration: ";
cin >> no_of_courses;
cin.ignore();
int count = 0;
cout << endl << "Enter the course codes for the courses offered." << endl;
while (count < no_of_courses){
cout << "What is the course code?: ";
getline(cin, course_code);
count += 1;
course_list.push_back(course_code);
}
cout << "\nPlease enter the units of each course.\n";
for (int i=0; i< no_of_courses; i++){
	cout << "Enter the unit for " << course_list.at(i) << endl;
	cin >> unit;
	cin.ignore();
		course_units.push_back(unit);
}
cout << "Now, kindly input your grades for each course.";

for (int i=0; i< no_of_courses; i++){
	cout << "Enter your grade for " << course_list.at(i) << endl;
	cin >> grade;
	cin.ignore();
		course_grades.push_back(grade);
}

int UA = 0;
for (int i=0; i< no_of_courses; i++){
	UA += course_units.at(i);
}
int UP = 0;
for (int i=0; i< no_of_courses; i++){
	if (course_grades.at(i) == 'A' || course_grades.at(i) == 'B' || course_grades.at(i) == 'C' || course_grades.at(i) == 'D'
		|| course_grades.at(i) == 'E'){
	UP += course_units.at(i);}
}
int WS = 0;
for (int i=0; i< no_of_courses; i++){
	switch(course_grades.at(i)){
	case 'A' :
		WS += 5*course_units.at(i);
		break;
	case 'B' :
		WS += 4*course_units.at(i);
		break;
	case 'C' :
		WS += 3*course_units.at(i);
		break;
	case 'D' :
		WS += 2*course_units.at(i);
		break;
	case 'E' :
		WS += 1*course_units.at(i);
		break;
	case 'F' :
		WS += 0*course_units.at(i);
		break;
}
}
cout.precision(2);
cout.setf(ios::fixed);
float GPA = static_cast<float>(WS)/static_cast<float>(UA);
cout << "Hello, " << name << '!' << "\nCongratulations on a job well done. Here are your results for the semester." << endl;
cout << "You attempted " << UA << " units." << endl;
cout << "You passed " << UP << " units." << endl;
cout << "Your WS is " << WS << endl;
cout << "Ypur GPA for the semester is " << GPA << endl;
}










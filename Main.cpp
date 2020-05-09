#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Roster.h"
#include "Student.h"
#include "Degree.h"

using namespace std;


int main() {

	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Dummy,Dummy,Dummy,Dummy,Dummy,Dummy,Dummy,SOFTWARE"
	};

	int numStudents = 5;

	Roster* classRoster = new Roster(numStudents);
	

	cout << "C867 Scrpiting and Programming Applications" << endl;
	cout << "Written in C++ by Blake Lambert, Student ID: " << endl;

	for (int i = 0; i < numStudents; i++) {
		classRoster->parseAndAdd(studentData[i]);
	}
    
    classRoster->printAll();

	/*
	cout << endl;

	classRoster->printInvalidEmails();

	cout << endl;

	for (int i = 0; i < numStudents; i++) {
		classRoster->printAverageDaysInCourse(classRoster->getStudentAt(i)->getStudentID());
	}

	classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);

	classRoster->remove("A3");

	classRoster->printAll();

	classRoster->remove("A3");
	*/
    
	system("pause");

	return 0;
}

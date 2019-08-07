// StudentManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Wayland Bang

#include "pch.h"
#include <iostream>
#include "StudentManager.h"


using namespace std;

void Student::Calculate() {
	average = (math + compSci + chem + english + french) / 5.0f;


	/*
	Using SFU's grading distribution
	A+	>=92
	A	87-91
	A-	82-86
	B+	78-81
	B	74-77
	B-	70-73
	C+	65-69
	C	60-64
	C-	55-59
	D	50-54
	F	<50
	*/
	if (average >= 92.0) {
		gradePoint = 4.33;
		letterGrade = "A+";
	}
	else if (average >= 87.0 && average <= 91.0) {
		gradePoint = 4.00;
		letterGrade = "A";
	}
	else if (average >= 82.0 && average <= 86.0) {
		gradePoint = 3.67;
		letterGrade = "A-";
	}
	else if (average >= 78.0 && average <= 81.0) {
		gradePoint = 3.33;
		letterGrade = "B+";
	}
	else if (average >= 74.0 && average <= 77.0) {
		gradePoint = 3.00;
		letterGrade = "B";
	}
	else if (average >= 70.0 && average <= 73.0) {
		gradePoint = 2.67;
		letterGrade = "B-";
	}
	else if (average >= 65.0 && average <= 69.0) {
		gradePoint = 2.33;
		letterGrade = "C+";
	}
	else if (average >= 60.0 && average <= 64.0) {
		gradePoint = 2.00;
		letterGrade = "C";
	}
	else if (average >= 55.0 && average <= 59.0) {
		gradePoint = 1.67;
		letterGrade = "C-";
	}
	else if (average >= 50.0 && average <= 54.0) {
		gradePoint = 1.00;
		letterGrade = "D";
	}
	else if(average < 50.0) {
		gradePoint = 0.00;
		letterGrade = "D";
	}
	
}


void Student::GetData(){
	//input and output for student
	/*
	int idNum;
	char name[25];
	int math, compSci, chem, english, french;
	float average;
	float gradePoint;
	char letterGrade;
	void calculate();

	*/
	cout << "type student_id: "  << endl;
	cin >> idNum;
	cout << "type student_first_name" << " " << endl;
	cin >> fname;
	cout << "type student_list_name" << endl;
	cin >> lname;
	cout << "type in grades for math" << endl;
	cin >> math;
	cout << "type in grades for computer science" << endl;
	cin >> compSci;
	cout << "type in grades for chemistry" << endl;
	cin >> chem;
	cout << "type in grades for english" << endl;
	cin >> english;
	cout << "type in grades for french" << endl;
	cin >> french;
	//call calculate function
	Calculate();
}


void Student::ShowData() {

	cout << "Student Name: " << fname << lname << endl;
	cout << "Math Grade: " << math << endl;
	cout << "Computer Science Grade: " << compSci << endl;
	cout << "Chemistry Grade: " << chem << endl;
	cout << "English Grade: " << english << endl;
	cout << "French Grade: " << french << endl;
	cout << "Grade Point Average: " << gradePoint << endl;
	cout << "Letter Grade: " << letterGrade[0] << letterGrade[1] << endl;
}


int main()
{
	Student studentA;
	studentA.GetData();
	studentA.ShowData();
	return 0;
}


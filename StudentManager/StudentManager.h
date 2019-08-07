class Student {

	int idNum;
	char fname[20];
	char lname[20];
	int math, compSci, chem, english, french;
	float average;
	double gradePoint;
	std::string letterGrade;
	void Calculate();

public:

	void GetData(); 
	void ShowData();
};

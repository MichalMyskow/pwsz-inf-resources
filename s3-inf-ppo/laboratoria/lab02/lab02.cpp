#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

#define STUDENTS_COUNT 10

class Student {
	public:
		string studentNo,studentimie,studentnazwisko;
		bool studentaktywnosc;
					
		void setStudentNo(string studentNo) {
			this->studentNo = studentNo;
		}
		
		string getStudentNo() {
			return this->studentNo;
		}
		
		void setStudentImie(string studentimie) {
			this->studentimie = studentimie;
		}
		
		string getStudentImie() {
			return this->studentimie;
		}
		
		void setStudentNazwisko(string studentnazwisko) {
			this->studentnazwisko = studentnazwisko;
		}
		
		string getStudentNazwisko() {
			return this->studentnazwisko;
		}
		
		void setStudentAktywnosc(bool studentaktywnosc) {
			this->studentaktywnosc = studentaktywnosc;
		}
		
		bool getStudentAktywnosc() {
			return this->studentaktywnosc;
		}
};

string getRandomStudentNumber() {
	ostringstream ss;
	int randomNumber = rand() % 2000 + 37000;
	
	ss << randomNumber;
	
	return ss.str();
}

string getRandomStudentImie(){
	string Imiona[13] = {"Michal","Kamil","Eryk","Dominik","Ola",
	"Dominika","Agnieszka","Patryk","Adam","Kinga","Pawel","Maciek","Zbigniew"};
	string imie = Imiona[rand() % 13];
	return imie;
}

string getRandomStudentNazwisko(){
	string Nazwiska[13] = {"Biedrzycki","Jaworowski","Olstowski","Cholyk",
	"Tomalski","Dominikanski","Mackow","Grzeskow","Myskow","Przybylski","Pawelski","Nowak","Kaminski"};
	string nazwisko = Nazwiska[rand() % 13];
	return nazwisko;
}

bool getRandomStudentAktywnosc(){
	bool aktywnosc;
	aktywnosc = rand() % 2;
	return aktywnosc;
}


int main() {
	srand((unsigned int)time(NULL));
	vector<Student> students;
	for(int i = 0; i < STUDENTS_COUNT; i++) {
		Student student;
		student.setStudentNo(getRandomStudentNumber());
		student.setStudentNo(getRandomStudentImie());
		student.setStudentNazwisko(getRandomStudentNazwisko());
		student.setStudentAktywnosc(getRandomStudentAktywnosc());
		students.push_back(student);
	}
	
	cout  << "Lista wszystkich studentow:" << endl << endl;
	
	for(int i = 0; i < students.size(); i++) {
		Student student = students.at(i);
			cout << student.getStudentImie() << "  " << student.getStudentNazwisko() << "  " <<
				student.getStudentNo()<< " Aktywnosc: " << student.getStudentAktywnosc()<< endl;
	}
	
	cout << endl << "Lista aktywnych studentow:" << endl << endl;
	
	for(int i = 0; i < students.size(); i++) {
		Student student = students.at(i);
		if (student.getStudentAktywnosc() == 1){
			cout << student.getStudentImie() << "  " << student.getStudentNazwisko() << "  " <<
				student.getStudentNo()<< " Aktywnosc: " << student.getStudentAktywnosc()<< endl;
		}
	}
	
	return 0;
}


#pragma once
class Worker {
private:
	static int idGenerator;
	int id;
	string name;
	string surname;
	int age;
	int pageCount;
public:
	Worker( const string& name, const string& surname, int age, int pageCount)
        :  name(name), surname(surname), age(age), pageCount(pageCount) {
		id = ++idGenerator;
	}
	int getId() const {
		return id;
	}
	string getName() {
		return name;
	}
	string getSurname() {
		return surname;
	}
	int getAge() {
		return age;
	}
	int getPageCount() {
		return pageCount;
	}
	void printInfo() const {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Pagecount " << pageCount << endl;
	}
	string getFullName() const {
		return name + " " + surname;
	}

};

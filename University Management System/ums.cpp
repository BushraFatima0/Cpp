#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string id;
    string contact;
public:
    Person(string name, int age, string id, string contact)
        : name(name), age(age), id(id), contact(contact) {}
    virtual ~Person() {}

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age
             << ", ID: " << id << ", Contact: " << contact << endl;
    }
    string getID() { return id; }
    virtual float calculatePayment() { return 0.0; }
};

class Student : public Person {
protected:
    string enrollmentDate, program;
    float gpa;
public:
    Student(string name, int age, string id, string contact,
            string enrollmentDate, string program, float gpa)
        : Person(name, age, id, contact),
          enrollmentDate(enrollmentDate), program(program), gpa(gpa) {}

    void display() override {
        Person::display();
        cout << "Enrollment: " << enrollmentDate << ", Program: " << program << ", GPA: " << gpa << endl;
    }

    float calculatePayment() override { return 1000.0; }
};
class professor : public Person {
protected:
    string department, specialization, hireDate;
public:
    professor(string name, int age, string id, string contact,
              string department, string specialization, string hireDate)
        : Person(name, age, id, contact),
          department(department), specialization(specialization), hireDate(hireDate) {}

    void display() override {
        Person::display();
        cout << "Department: " << department << ", Specialization: " << specialization
             << ", Hire Date: " << hireDate << endl;
    }
    float calculatePayment() override { return 5000.0; }
};
class assistant : public professor {
public:
    assistant(string name, int age, string id, string contact,
              string department, string specialization, string hireDate)
        : professor(name, age, id, contact, department, specialization, hireDate) {}
    float calculatePayment() override { return 6000.0; }
};
class associate : public professor {
public:
    associate(string name, int age, string id, string contact,
              string department, string specialization, string hireDate)
        : professor(name, age, id, contact, department, specialization, hireDate) {}
    float calculatePayment() override { return 8000.0; }
};
class full : public professor {
public:
    full(string name, int age, string id, string contact,
         string department, string specialization, string hireDate)
        : professor(name, age, id, contact, department, specialization, hireDate) {}
    float calculatePayment() override { return 10000.0; }
};
class Course {
private:
    string code, title, description;
    int credits;
public:
    Course(string code, string title, int credits, string description)
        : code(code), title(title), credits(credits), description(description) {}

    void display() {
        cout << "Course Code: " << code << ", Title: " << title
             << ", Credits: " << credits << ", Description: " << description << endl;
    }

    string getCode() { return code; }
};
class Department {
private:
    string name, location;
    double budget;
public:
    Department(string name, string location, double budget)
        : name(name), location(location), budget(budget) {}

    void display() {
        cout << "Department: " << name << ", Location: " << location << ", Budget: " << budget << endl;
    }
};
class GradeBook {
private:
    vector<string> studentIDs;
    vector<float> grades;
public:
    void addGrade(string id, float grade, const vector<Person*>& people) {
        bool found = false;
        for (auto p : people) {
            Student* s = dynamic_cast<Student*>(p);
            if (s && s->getID() == id) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Student ID not found in the system.\n";
            return;
        }
        studentIDs.push_back(id);
        grades.push_back(grade);
    }
    void avg() {
        if (grades.empty()) {
            cout << "No grades available.\n";
            return;
        }
        float sum = 0;
        for (float g : grades) sum += g;
        cout << "Average Grade: " << sum / grades.size() << endl;
    }
    void highest() {
        if (grades.empty()) {
            cout << "No grades available.\n";
            return;
        }
        float max = grades[0];
        for (float g : grades)
            if (g > max) max = g;
        cout << "Highest Grade: " << max << endl;
    }
    void failing() {
        cout << "Failing Students (GPA < 5):\n";
        for (size_t i = 0; i < grades.size(); ++i)
            if (grades[i] < 5)
                cout << "ID: " << studentIDs[i] << ", Grade: " << grades[i] << endl;
    }
};
class EnrollmentManager {
private:
    vector<string> studentIDs;
    vector<string> courseCodes;
public:
    void enroll(string sid, string code) {
        studentIDs.push_back(sid);
        courseCodes.push_back(code);
        cout << "Student enrolled.\n";
    }
    void drop(string sid, string code) {
        for (size_t i = 0; i < studentIDs.size(); ++i) {
            if (studentIDs[i] == sid && courseCodes[i] == code) {
                studentIDs.erase(studentIDs.begin() + i);
                courseCodes.erase(courseCodes.begin() + i);
                cout << "Student dropped.\n";
                return;
            }
        }
        cout << "Enrollment not found.\n";
    }
    int countEnrollments() { return studentIDs.size(); }
};
int main() {
    vector<Person*> people;
    GradeBook gradeBook;
    EnrollmentManager enrollment;
    int choice;
    do {
        cout << "\nUniversity System Menu\n"
             << "1. Add student\n2. Add professor\n3. Display students\n4. Display professors\n"
             << "5. GradeBook\n6. Enrollment\n0. exit\nChoice: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            string name, id, contact, enrollDate, program;
            int age;
            float gpa;
            cout << "Name: "; getline(cin, name);
            cout << "Age: "; cin >> age; cin.ignore();
            cout << "ID: "; getline(cin, id);
            cout << "Contact: "; getline(cin, contact);
            cout << "Enrollment Date: "; getline(cin, enrollDate);
            cout << "Program: "; getline(cin, program);
            cout << "GPA: "; cin >> gpa; cin.ignore();
            people.push_back(new Student(name, age, id, contact, enrollDate, program, gpa));
        }
        else if (choice == 2) {
            string name, id, contact, dept, spec, hireDate;
            int age, type;
            cout << "1. assistant 2. associate 3. full\nType: ";
            cin >> type; cin.ignore();
            cout << "Name: "; getline(cin, name);
            cout << "Age: "; cin >> age; cin.ignore();
            cout << "ID: "; getline(cin, id);
            cout << "Contact: "; getline(cin, contact);
            cout << "Department: "; getline(cin, dept);
            cout << "Specialization: "; getline(cin, spec);
            cout << "Hire date: "; getline(cin, hireDate);

            if (type == 1)
                people.push_back(new assistant(name, age, id, contact, dept, spec, hireDate));
            else if (type == 2)
                people.push_back(new associate(name, age, id, contact, dept, spec, hireDate));
            else
                people.push_back(new full(name, age, id, contact, dept, spec, hireDate));
        }
        else if (choice == 3) {
            for (auto p : people) {
                if (dynamic_cast<Student*>(p)) {
                    p->display();
                    cout << "Payment: " << p->calculatePayment() << "\n\n";
                }
            }
        }
        else if (choice == 4) {
            for (auto p : people) {
                if (dynamic_cast<professor*>(p)) {
                    p->display();
                    cout << "Payment: " << p->calculatePayment() << "\n\n";
                }
            }
        }
        else if (choice == 5) {
            int x;
            cout << "1. Add grade\n2. Average\n3. Highest\n4. Failing\nChoice: ";
            cin >> x; cin.ignore();
            if (x == 1) {
                string sid;
                float g;
                cout << "Student id: "; getline(cin, sid);
                cout << "Grade: "; cin >> g; cin.ignore();
                gradeBook.addGrade(sid, g, people);
            } else if (x == 2)
                gradeBook.avg();
            else if (x == 3)
                gradeBook.highest();
            else if (x == 4)
                gradeBook.failing();
        }
        else if (choice == 6) {
            int y;
            cout << "1. enroll\n2. drop\n3. count\nchoice: ";
            cin >> y; cin.ignore();
            if (y == 1 || y == 2) {
                string sid, cid;
                cout << "Student id: "; getline(cin, sid);
                cout << "course code: "; getline(cin, cid);
                if (y == 1) enrollment.enroll(sid, cid);
                else enrollment.drop(sid, cid);
            } else if (y == 3) {
                cout << "total enrollments: " << enrollment.countEnrollments() << endl;
            }
        }
    } while (choice != 0);
    return 0;
}

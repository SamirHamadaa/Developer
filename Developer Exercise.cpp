#include <iostream>
using namespace std;

class clsPerson
{

private:

    short  _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }


    short GetID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return  _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return  _LastName;
    }

    string FullName()
    {
        return  _FirstName + " " + _LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return  _Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string GetPhone()
    {
        return  _Phone;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n_________________________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirstName  : " << _FirstName;
        cout << "\nLastName   : " << _LastName;
        cout << "\nFullName   : " << FullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n_________________________________";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\n\nThe Following Message Sent Successfully To Email : "
            << _Email;

        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\n\nThe Following SMS Sent Successfully To Phone : "
            << _Phone;

        cout << "\n" << TextMessage << endl;
    }

};

class clsEmployee : public clsPerson
{

private:

    string _Title;
    string _Department;
    float  _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        :clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string GetTitle()
    {
        return _Title;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string GetDepartment()
    {
        return _Department;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float GetSalary()
    {
        return _Salary;
    }

    void Print()
    {

        cout << "\nInfo :";
        cout << "\n_________________________________";
        cout << "\nID         : " << GetID();
        cout << "\nFirstName  : " << GetFirstName();
        cout << "\nLastName   : " << GetLastName();
        cout << "\nFullName   : " << FullName();
        cout << "\nEmail      : " << GetEmail();
        cout << "\nPhone      : " << GetPhone();
        cout << "\nTitle      : " << _Title;
        cout << "\nDepartment : " << _Department;
        cout << "\nSalary     : " << _Salary;
        cout << "\n_________________________________";


    }


};

class clsDeveloper : public clsEmployee
{

private :

    string _MainProgrammingLanguage;
   
public : 


    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, string ProgrammingLanguage, float Salary)
        : clsEmployee(ID, FirstName, LastName, Email, Phone,Title,Department,Salary)
    {

        _MainProgrammingLanguage = ProgrammingLanguage;

    }


    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GetMainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

   
    void Print()
    {

        cout << "\nInfo :";
        cout << "\n__________________________________________________";
        cout << "\nID                      : " << GetID();
        cout << "\nFirstName               : " << GetFirstName();
        cout << "\nLastName                : " << GetLastName();
        cout << "\nFullName                : " << FullName();
        cout << "\nEmail                   : " << GetEmail();
        cout << "\nPhone                   : " << GetPhone();
        cout << "\nTitle                   : " << GetTitle();
        cout << "\nDepartment              : " << GetDepartment();
        cout << "\nMainProgrammingLanguage : " << _MainProgrammingLanguage;
        cout << "\nSalary                  : " << GetSalary();
        cout << "\n__________________________________________________";

    }


};


int main()
{

    clsDeveloper Developer(2050, "Samir", "Hamada", "Sameirhamadaa2@gmail.com", "01065634870", "Ceo", "SoftwareEngineering", "C++", 500000);
    Developer.Print();

    system("pause>0");

    return 0;
}
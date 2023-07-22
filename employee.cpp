#include "iostream"
using namespace std;

class Employee
{
    private:
        int eid;
        string ename;
    public:
        Employee(int e, string n)
        {
            eid = e;
            ename = n;

        }
        int getEmployeeID(){return eid;}
        string getEmployeeName(){return ename;}
        
};

class FullTimeEmployee : public Employee
{
    private:
        int salary;
    public:
        FullTimeEmployee(int e, string n, int sal):Employee(e, n)
        {
            salary = sal;
        }
        int getSalary(){return salary;}

};

class PartTimeEmployee : public Employee
{
    private:
        int wage;
    public:
        PartTimeEmployee(int e, string n, int w):Employee(e, n)
        {
            wage = w;
        }
        int getWage(){return wage;}
};

int main()
{
    Employee emp(1234,"nihal");
    cout<<emp.getEmployeeID()<<endl;
    cout<<emp.getEmployeeName()<<endl;
    FullTimeEmployee femp(78934,"Mani",50000);
    PartTimeEmployee pemp(67345,"Juan", 2500);

    cout<<femp.getEmployeeName()<<" "<<femp.getEmployeeID()<<" "<<femp.getSalary()<<endl;
    cout<<pemp.getEmployeeName()<<" "<<pemp.getEmployeeID()<<" "<<pemp.getWage()<<endl;
    return 0;
}
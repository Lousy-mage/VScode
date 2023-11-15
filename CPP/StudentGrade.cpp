#include "iostream"
#include "string"
using namespace std;

class Student
{
    private:

    string studentName;
    int roll;
    int mark1;
    int mark2;
    int mark3;

    public:

    Student(string n="invalid", int r=0, int m1=0, int m2=0, int m3=0)
    {
        setName(n);
        setRoll(r);
        setMark1(m1);
        setMark2(m2);
        setMark3(m3);
    }

    void setName(string n);
    void setRoll(int r);
    void setMark1(int m1);
    void setMark2(int m2);
    void setMark3(int m3);

    // string getName();
    // int getRoll();
    // int getMark1();
    // int getMark2();
    // int getMark3();

    int totalMarks();
    string grade();

    // ~Student();

};

int main()
{
    string name;
    int roll, m1,m2,m3;
    cout<<"Enter student name "<<endl;
    cin>>name;
    cout<<"Enter Roll.no "<<endl;
    cin>>roll;
    cout<<"Enter marks of top 3 subjects "<<endl;
    cin>>m1>>m2>>m3;
    Student s(name,roll,m1,m2,m3);
    cout<<"Total marks of "<<name<<" is "<<s.totalMarks()<<endl;
    cout<<"Student grade is "<<s.grade()<<endl;

    return 0;
}

void Student::setName(string n)
{
    studentName=n;
}
void Student::setRoll(int r)
{
    roll=r;
}
void Student::setMark1(int m)
{
    mark1=m;
}
void Student::setMark2(int m)
{
    mark2=m;
}
void Student::setMark3(int m)
{
    mark3=m;
}
int Student::totalMarks()
{
    int total;
    total=mark1+mark2+mark3;
    return total;
}
string Student::grade()
{
    int total=totalMarks();
    int average=total/3;
    if (average==100)
    {
        return "Good";
    }
    else if (average>=90)
        return "Study harder";
    else if (average<90 && average>=80)
    {
        return "It kinda bad";
    }
    else if (average<80 && average>=70)
    {
        return "I'm Losing Hope";
    }
    else
        return "Total Loser!";
     
}
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student{
private:
    string name;
    int roll;
    string subject;
    string city;
public:
    Student() {}
    ~Student() {}
    void getInput(){
        string names, subjects, citys;
        int rolls;
        cout<<"Enter Student's name: ";
        cin>>names;
        cout<<"Enter Student's roll: ";
        cin>>rolls;
        cout<<"Enter Student's subject: ";
        cin>>subjects;
        cout<<"Enter Student's city: ";
        cin>>citys;
        name = names;
        roll = rolls;
        subject = subjects;
        city = citys;
    }
    void display(){
        cout << "Name: " << name<<endl;
        cout << "roll: " << roll<<endl;
        cout << "subject: " << subject<<endl;
        cout << "city: " << city<<endl;
    }
    string getStudentSubject(){
        return subject;
    }
};
int main(){
    vector<string> StudentSubject;
    while(true)
    {   
        int j;
        cout << "Enter 1 to add student, 0 to stop: ";
        cin >> j;
        if (j == 0) break;
        else if(j == 1)
        {
            Student stuObj;
            stuObj.getInput();
            //stuObj.display();
            StudentSubject.push_back(stuObj.getStudentSubject());
        }
        else cout<<"Wrong input"<<endl;
    }
    sort(StudentSubject.begin(), StudentSubject.end());
    for(int i=0; i<StudentSubject.size(); i++)
    {
        cout<<StudentSubject[i]<<endl;
    }
    
    return 0;
}


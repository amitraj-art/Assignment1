#include<iostream>
#include<vector>
#include<algorithm>
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
            void GetInput(){
                string names, subjects, citys;
                int rolls;
                cout<<"Enter Student's name: ";
                cin>>names;
                cout<<"Enter Student's subject: ";
                cin>>subjects;
                cout<<"Enter Student's city: ";
                cin>>citys;
                cout<<"Enter Student's roll: ";
                cin>>rolls;
                name=names;
                subject=subjects;
                city=citys;
                roll=rolls;
            }
            void display(){
                cout<<"Name: "<< name<<endl;
                cout<<"Subject: "<< subject<<endl;
                cout<<"City: "<< city<<endl;
                cout<<"Roll: "<< roll<<endl;
             }
        string GetStudentSubject(){
            return subject;
        }
        string GetStudentCity(){
            return city;
        }
        int GetStudentRoll(){
            return roll;
        }
        string GetStudentName(){
            return name;
        }
};
bool CompareBySubject(Student &a, Student &b){
    return a.GetStudentSubject()< b.GetStudentSubject();
}
bool CompareByCity(Student &a, Student &b){
    return a.GetStudentCity()< b.GetStudentCity();
}
bool CompareByRoll(Student &a, Student &b){
    return a.GetStudentRoll()<b.GetStudentRoll();
}
bool CompareByName(Student &a, Student &b){
    return a.GetStudentName()< b.GetStudentName();
}
int main(){
    vector<Student> StudentSubject;
    vector<Student> StudentCity;
    vector<Student> StudentRoll;
    vector<Student> StudentName;
    while (true)
    {
       int i;
       cout<< "Enter 1 to add student, 0 to stop: ";
       cin>>i;
       if (i==0) break;
       else if (i==1)
       {
        Student stuObj;
        stuObj.GetInput();
        StudentSubject.push_back(stuObj);
        StudentCity.push_back(stuObj);
        StudentRoll.push_back(stuObj);
        StudentName.push_back(stuObj);
       }
       else cout<<"Wrong Input"<<endl;
    }
    sort(StudentSubject.begin(), StudentSubject.end(), CompareBySubject);
    sort(StudentCity.begin(), StudentCity.end(), CompareByCity);
    sort(StudentRoll.begin(), StudentRoll.end(), CompareByRoll);
    sort(StudentName.begin(), StudentName.end(), CompareByName);
    if(StudentSubject.size() != 0){
        cout<<endl<<endl;
        cout<< "Student sorted by Subject:"<<endl;
    }        
    for(int i=0; i<StudentSubject.size(); i++)
    {
        StudentSubject[i].display();        
    }
    
    if(StudentCity.size() != 0){
        cout<<endl<<endl;
        cout<< "Student sorted by City:"<<endl;
    }
    for(int i=0; i<StudentCity.size(); i++){
        StudentCity[i].display();        
    }    

    if(StudentRoll.size() != 0){
        cout<<endl<<endl;
        cout<< "Student sorted by roll:"<<endl;
    }        
    for (int i=0; i<StudentRoll.size(); i++){        
        StudentRoll[i].display();        
    }    
    
    if(StudentName.size() != 0){
        cout<<endl<<endl;
        cout<< "Student sorted by name:"<<endl;
    }    
    for(int i=0; i<StudentName.size(); i++){        
        StudentName[i].display();        
    }    
    return 0;
    
}
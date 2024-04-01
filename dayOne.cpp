#include <iostream>
using namespace std;
using std::string;

class student{
    private:
    string mail;
    double mark;
    int age;
    char section;

    public:
    string name;
    string rollno;

    //let's first implements all the setter for above class. 
    void setName(string Name){
        name=Name;
    }
    void setRollno(string Rollno){
        rollno=Rollno;
    }
    void setSec(char Sec){
        section=Sec;
    }
    void setAge(int Age){
        age=Age;
    }
    void setMark(double Mark){
        mark=Mark;
    }
    void setMail(string Mail){
        mail=Mail;
    }

    //here we implements the getter methods or funtions

    string getName(){
        return (name);
    }
    string getRollno(){
        return (rollno);
    }
    char getSec(){
        return (section);
    }
    int getAge(){
        return (age);
    }
    double getMark(){
        return (mark);
    }
    string getMail(){
        return (mail);
    }

    student(string NAME, string ROLLNO, string MAIL, double MARK,int AGE, char SECTION){
        name=NAME;
        rollno=ROLLNO;
        mail=MAIL;
        mark=MARK;
        age=AGE;
        section=SECTION;
    };

    void details(){
        cout<<"NAME: "<<name<<endl;
        cout<<"ROLL NO: "<<rollno<<endl;
        cout<<"MARK: "<<mark<<endl;
        cout<<"SEC: "<<section<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"MAIL: "<<mail<<endl;
        cout<<"--------------------------------"<<endl;
    }

    

};
main(){
    student student1=student("binay hembram","23MMT009","xyz@gamil.com",9.34,21,'B');

    student student2=student("deepu kumar","23MMT034","deepu@gamil.com",7.4,19,'A');
    
    

    cout<<"___________FIRST STUDENTS DETAILS____________"<<endl;
    student1.details();
    cout<<"___________SECOND STUDENTS DETAILS____________"<<endl;
    student2.details();

    cout<<"after some modificaion"<<endl;
    student1.setMark(9.43);
    student1.setName("binay 2nd name");
    student2.setName("deepu 2nd name");
    student2.setMark(5.32);
    cout<<"modification is done"<<endl;

    std::cout<<student1.getName()<<"with roll no "<<student1.getRollno()<<" has CGPA of "<<student1.getMark()<<endl;

    std::cout<<"students has changed the name to "<<student2.getName()<<" who has roll no "<<student2.getRollno()<<" with mark "<<student2.getMark()<<endl;
    
    
    return(0);

}
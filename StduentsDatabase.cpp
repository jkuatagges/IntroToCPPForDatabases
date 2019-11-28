/*
C++ program to create GEGIS Student database, read and print given number(Say n) student's details
(Example of array of objects).
A lot of commenting is to enhance understanding of anyone too green in programming to at lest have a grip
*/
#include <bits/stdc++.h> //For std iteration to keep on prompting the user to input and continuously save the entries
#include <iostream>
#include <string.h>

using namespace std;

#define MAX 500  //Maximum number of/Limit of students

/**OOP class instantiation**/
class Student{
    private:   //Access specifier.How the variables will be accessed by outside/global operators.
        string  name;
        string  Reg_No;
        float   total_Mrks;
        float   grading_points;

    public: 
    /*The details remain publicly accessible to all from outside access
      member function to get student's details*/
        void getDetails();

        void PrintTitle(){
           cout<<"\t\t\t GEGIS STUDENT DATABASE DEMO IN OOP"<<endl;
           cout<<"\t\t\t ==================================\n"<<endl;
       }

        //Member function to out put student's details
        void displayDetails(void);
};

//Member function definition, outside of the class at end of class
void Student::getDetails(void){
    cout << "Name: ";
    cin >> name;
    cout << "Student's Reg No: ";
    cin >> Reg_No;
    cout << "Total marks out of 100: ";
    cin >> total_Mrks;
    grading_points = (total_Mrks/100)*5;
}
//member function definition, outside of the class

void Student::displayDetails(void){
    cout << "Student Details: "<<endl;
    cout << "Name:"<< name << " | Reg Number:" << Reg_No << " | Total: " << total_Mrks << " | Percentage:" << grading_points<<"| Grade: "<<endl;
}
int main(){
    Student std[MAX];       //Array of objects creation
    int n, iter;            //n is the number of students, iter is any iterable from index 0 to index (n-1)
    Student PT;             //PT in this case is a function that will invoke the printTitle() as shown exactly below.
    PT.PrintTitle();
    cout << "Enter total number of students: " ;
    cin >> n;
    /*Loop to keep on getting details from the 1st to the nth student.*/
    for(iter = 0; iter < n; iter++){
            cout <<endl<<"Enter details of student " << iter+1 <<endl;
            std[iter].getDetails();
        }
    cout << endl;
/*For loop to keep on displaying the initially entered details from the 1st to the nth student.*/
    for(iter=0;iter< n; iter++){
            cout <<endl<<"Details of student " << (iter+1) << ":\n";
            std[iter].displayDetails(); //The displayDetails function displays the details.
        }
    return 0;
}
//End of code

#include <iostream>
#include <string>
#include "classGrades.h"

using namespace std ;


//    Instantiation of any object
StudentRecord student1 ;


int main() {



//  filling in the point quiz_one and converting them.
    cout << "Enter the scores in quiz_one : " << endl ;
    cin >> student1.quiz_one  ;
    student1.quiz_one *= 1.25 ;


//  filling in the point quiz_two and converting them.
    cout << "Enter the score in the quiz_two : " << endl ;
    cin >> student1.quiz_two ;
    student1.quiz_two *= 1.25 ;

//  filling in the point midterm_exam and converting them.

    cout << "Enter the score in the quiz_two : " << endl ;
    cin >> student1.midterm_points ;
    student1.midterm_points *= 0.25 ;

// filling in the point in final_exam and convertin them.
    cout << "Enter the score in the final exam : " << endl ;
    cin >> student1.finalExam_points ;
    student1.finalExam_points *= 0.5 ;

//    assinging the total score to variable score.
    double score = (student1.quiz_one + student1.quiz_two + student1.midterm_points + student1.finalExam_points ) ;

    if (100 >= score || score >= 90 )
        cout << "Scored Grade A" << endl ;

    else if (89 >= score || score >= 80)
        cout << "Scored Grade B" << endl ;

    else if (79 >= score || score >= 70)
        cout << "Scored Grade C" << endl ;

    else if (69 >= score || score >= 60)
        cout << "Scored Grade D" << endl ;

    else if (score <= 59)
         cout << "Scored Grade F" << endl ;



}


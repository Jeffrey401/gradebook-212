#include <iostream>
#include <vector>
#include "grade.h"

GradeBook::GradeBook() {
    homeworkGrades = getHomeworkGrades();
    labGrades = getLabGrades();
    MECprojectGrades = getMECProjectGrades();
    finalProjectGrade = getFinalProjectGrade();
    finalExamGrade = getFinalExamGrade();
}

std::vector<double> GradeBook::getHomeworkGrades() {
    // 1-D vector to store homework grades
    std::vector<double> homeworkGrades;
    int numHW;
    double grade;
    std::cout << "\nHow many programming assignments have been graded: ";
    std::cin >> numHW;

    if (numHW == 0) {
        return homeworkGrades;
    }
    //loop counter for each homework grade
    for(int i = 0; i < numHW; i++) {
        std::cout << "Enter homework " << i + 1 << " grade (out of 100): ";
        //input grades
        std::cin >> grade;
        bool goodChoice = false;
        while(goodChoice == false) {
            // if the values of the homework grades are from 0 to 100 then the values are valid
            if(grade >= 0 && grade <= 100) {
                goodChoice = true;
            } else { 
                // if the values are not within the range of 0 and 100 then it is an invalid entry
                std::cout << "Invalid entry. Re-enter homework " << i + 1 << " grade (out of 100): ";
                // input the grade again
                std::cin >> grade;
            }
        }
        // inserts the grades into the homework grades vector
        homeworkGrades.push_back(grade);
    }

    return homeworkGrades;
}


std::vector<double> GradeBook::getLabGrades() {
    // 1-D vector to store  lab grades
    std::vector<double> labGrades;
    int numLab;
    double grade;
    std::cout << "\nHow many labs have been graded: ";
    std::cin >> numLab;

    if (numLab == 0) {
        return labGrades;
    }
    //loop counter for the lab grades
    for(int i = 0; i < numLab; i++) {
        std::cout << "Enter lab " << i + 1 << " grade (out of 5): ";
        std::cin >> grade;
        bool goodChoice = false;
        while(goodChoice == false) {
            // condition checks if the lab grades is between 0 and 5 then it is valid
            if(grade >= 0 && grade <= 5) {
                goodChoice = true;
            } else { 
                // if the grades are not between 0 and 5 then it is invalid and re enter the lab grade
                std::cout << "Invalid entry. Re-enter lab " << i + 1 << " grade (out of 5): ";
                std::cin >> grade;
            }
        }
        // inserts the lab grades into the vector 
        labGrades.push_back(grade);
    }

    return labGrades;
}

std::vector<double> GradeBook::getMECProjectGrades() {
    // 1-D vector for MEC project grades
    std::vector<double> MECprojectGrades;
    int mec;
    double grade;
    std::cout << "\nHow many parts of the MEC project have been graded: ";
    std::cin >> mec;

    if (mec == 0) {
        return MECprojectGrades;
    }
    //loop counter for eachof the mec project grades
    for(int i = 0; i < mec; i++) {
        // if there is only one MEC project graded 
        if (i == 0) {
            std::cout << "Enter MEC Project Part " << i + 1 << " grade (out of 25): ";
            // input the grade of the first project
            std::cin >> grade;
            bool goodChoice = false;
            while(goodChoice == false) {
                // checks if the grade is between 0 and 25 then it is a valid grade 
                if(grade >= 0 && grade <= 25) {
                    goodChoice = true;
                } else { 
                    // if the grade is not between 0 and 25 then it is not a valid grade, then re enter grade 
                    std::cout << "Invalid entry. Re-enter MEC Project Part " << i + 1 << " grade (out of 25): ";
                    std::cin >> grade;
                }
            }
            // if there are two MEC project part grades then input the grade of the second part
        } else {
            std::cout << "Enter MEC Project Part " << i + 1 << " grade (out of 15): ";
            std::cin >> grade;
            bool goodChoice = false;
            while(goodChoice == false) {
                // checks if the grade total is between 0 and 15 then it is a valid input
                if(grade >= 0 && grade <= 15) {
                    goodChoice = true;
                } else { 
                    // if the grade point is not between 0 and 15 then it is not an invalid grade, then re-enter the grade
                    std::cout << "Invalid entry. Re-enter MEC Project Part " << i + 1 << " grade (out of 15): ";
                    std::cin >> grade;
                }
            }
        }
        // inserts the MEC project grade into the vector
        MECprojectGrades.push_back(grade);
    }

    return MECprojectGrades;
}


double GradeBook::getFinalProjectGrade() {
    // initialization and declaring finalprojectgrade to 0
    double finalProjectGrade = 0;
    // initializing answer as a character
    char answer;
    std::cout << "\nHas the final project been graded (Y/N): ";
    std::cin >> answer;
    
    if(toupper(answer) == 'N') {
        return finalProjectGrade;
    }

    bool goodChoice = false;
    while(goodChoice == false) {
        if(toupper(answer) == 'Y') {
            goodChoice = true;
        } else {
            std::cout << "Invalid entry. Re-enter Y/N: ";
            std::cin >> answer;
        }
    }
    
    std::cout << "Enter final project grade (out of 350): ";
    std::cin >> finalProjectGrade;
    goodChoice = false;
    while(goodChoice == false) {
        // checks if the finalproject grade is between 0 and 350 then the grade is valid
        if(finalProjectGrade >= 0 && finalProjectGrade <= 350) {
            goodChoice = true;
        } else { 
            // else if the grade is not between 0 and 350 then it is an invalid grade, re-enter the final project grade
            std::cout << "Invalid entry. Re-enter final project grade (out of 350): ";
            std::cin >> finalProjectGrade;
        }
    }

    return finalProjectGrade;
}


double GradeBook::getFinalExamGrade() {
    // initializing and declaring finalexamgrade to 0
    double finalExamGrade = 0;
    // declaring answer as a character
    char answer;
    std::cout << "\nHas the final exam been graded (Y/N): ";
    std::cin >> answer;

    if(toupper(answer) == 'N') {
        return finalExamGrade;
    }

    bool goodChoice = false;
    while(goodChoice == false) {
        if(toupper(answer) == 'Y') {
            goodChoice = true;
        } else {
            std::cout << "Invalid entry. Re-enter Y/N: ";
            std::cin >> answer;
        }
    }

    std::cout << "Enter final exam grade (out of 100): ";
    std::cin >> finalExamGrade;
    goodChoice = false;
    while(goodChoice == false) {
        // checks if the final exam grade entered is between 0 and 100, then it is a valid grade
        if(finalExamGrade >= 0 && finalExamGrade <= 100) {
            goodChoice = true;
        } else { 
            // else if the grade is not between 0 and 100 then it is an invalid grade, then re-enter the final grade
            std::cout << "Invalid entry. Re-enter final exam grade (out of 100): ";
            std::cin >> finalExamGrade;
        }
    }

    return finalExamGrade;
}

// calculate homework grades
double GradeBook::calcWeightedHomeworkGrade() {
    double total = 0;

    for(int i = 0; i < homeworkGrades.size(); i++) {
        total += homeworkGrades[i];
    }
    return total / 10;
}

//calculate lab grades
double GradeBook::calcWeightedLabGrade() {
    double total = 0;

    for(int i = 0; i < labGrades.size(); i++) {
        total += labGrades[i];
    }
    return total / 10;
}

// calculate MEC project grades
double GradeBook::calcWeightedMECProjectGrades() {
    double total = 0;

    for(int i = 0; i < MECprojectGrades.size(); i++) {
        total += MECprojectGrades[i];
    }
    return total / 10;
}

// calculate final project grade
double GradeBook::calcWeightedFinalProjectGrade() {
    return finalProjectGrade / 10;
}

// calculate final exam grade
double GradeBook::calcWeightedFinalExamGrade() {
    return finalExamGrade / 10;
}

double GradeBook::addedWeightedGrades() {
    double hwWeighted = calcWeightedHomeworkGrade();
    double labWeighted = calcWeightedLabGrade();
    double MECweighted = calcWeightedMECProjectGrades();
    double examWeighted = calcWeightedFinalExamGrade();
    double projWeighted = calcWeightedFinalProjectGrade();
    return hwWeighted + labWeighted + MECweighted + examWeighted + projWeighted;
}

void GradeBook::printGradeSummary() {
    double totalGrade = addedWeightedGrades();
    //std::cout << std::endl;
    std::cout << "\nYour total percentage points is " << totalGrade << " and ";
    // if the user's final grade is greater than or equal to 94 , then the letter grade is  A
    if (totalGrade >= 94) {
        std::cout << "your grade is A.\n";
        
        // if the user's final grade is between 93 and 90 , then the letter grade is  A-
    } else if (totalGrade >= 90 && totalGrade < 94) {
        std::cout << "your grade is A-.\n";
        
        // if the user's final grade is between 89 and 87 , then the letter grade is  B+
    } else if (totalGrade >= 87 && totalGrade < 90) {
        std::cout << "your grade is B+.\n";
        
        // if the user's final grade is between 86 and 83 , then the letter grade is  B
    } else if (totalGrade >= 83 && totalGrade < 87) {
        std::cout << "your grade is B.\n";
        
        // if the user's final grade is between 82 and 80 , then the letter grade is  B-
    } else if (totalGrade >= 80 && totalGrade < 83) {
        std::cout << "your grade is B-.\n";
        
        // if the user's final grade is between 79 and 77 , then the letter grade is  C+
    } else if (totalGrade >= 77 && totalGrade < 80) {
        std::cout << "your grade is C+.\n";
        
        // if the user's final grade is between 76 and 73 , then the letter grade is  C
    } else if (totalGrade >= 73 && totalGrade < 77) {
        std::cout << "your grade is C.\n";
        
        // if the user's final grade is between 72 and 70 , then the letter grade is  C-
    } else if (totalGrade >= 70 && totalGrade < 73) {
        std::cout << "your grade is C-.\n";
        
        // if the user's final grade is between 69 and 67 , then the letter grade is  D+
    } else if (totalGrade >= 67 && totalGrade < 70) {
        std::cout << "your grade is D+.\n";
        
        // if the user's final grade is between 66 and 60 , then the letter grade is  D
    } else if (totalGrade >= 60 && totalGrade < 67) {
        std::cout << "your grade is D.\n";
    } else {
        // // if the user's final grade is less than 60, then the letter grade is F
        std::cout << "your grade is F.\n";
    }
    std::cout << std::endl;
}
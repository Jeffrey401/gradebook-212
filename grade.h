// #ifndef and #define are header guards
//use is to prevent the header file from being included multiple times.
#ifndef GRADE_H
#define GRADE_H

#include <vector>

class GradeBook {
    private:
        std::vector<double> homeworkGrades;
        std::vector<double> labGrades;
        std::vector<double> MECprojectGrades;
        double finalProjectGrade;
        double finalExamGrade;
        // Getter members
        std::vector<double> getHomeworkGrades();
        std::vector<double> getLabGrades();
        std::vector<double> getMECProjectGrades();
        double getFinalProjectGrade();
        double getFinalExamGrade();

    public:
        //default constructor
        GradeBook();
        // Setter and getter for member variables
        double calcWeightedHomeworkGrade();
        double calcWeightedLabGrade();
        double calcWeightedMECProjectGrades();

        double calcWeightedFinalProjectGrade();
        double calcWeightedFinalExamGrade();

        double addedWeightedGrades();

        void printGradeSummary();

};

#endif
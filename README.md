# GRADEBOOK PROJECT

## Contributors
:leo: **Yemi Fasina <br/>
:aquarius: Samuel Perez <br/>
:libra: Jeffrey Gutierrez <br/>
:aries: Ayomide Oladele** <br/>

## Brief Summary of the project

This is a gradebook project to interpret CSC 212 grades into a grade that represents a student's current standing in the course. In this project, all the grading set-up used in CSC 212: 5% for the labs, 35% for final project, 50% for the assignments, 10% for the final exam and 4% extra credit for the mini challenge. This project was implemented by using the required structures: a `class` and `vectors`. 
> The implementation files are: `grade.cpp` which contains the implementation of the class and member definitions, `main.cpp` which contains object declarations and function calls, and `grade.h`, a header file that contains pre-defined class member functions.
We implemented each class to represent each grading portion. For example, we have a function each to calculate grades, exam, the final project and the labs.

## Setup
1. Open your terminal and move with the `cd` command to the directory storing all three files.
2. Compile the source code by running `g++ grade.cpp main.cpp -o grades`.
3. Run the executable file with `./grades`.
4. Enter user inputs, and a percentage point total and letter grade will be displayed to the standard output :)


## Important features of the Algorithm 

In this algorithm  `Class` was used  which is a user-defined data type, which holds its own data members accessed by creating instances of that class. In this project, an  object oriented concept - `Encapsulation` was used which is the bundling of  data members and functions together in a place to protect data using `getters` and `setters`, and also to make code cleaner and eaier to read and also implemented it to help control the modification of the data members. Another feature used in this algorithm is a  `Constructor` which is a method implemented to automatically call it when an object of the class is declared. The constructor has the same name as the declaring class and initalizies the data members. The constructor was properly written to ensure object is left in a valid state. 

> MUST BE NICE: This algorithm checks for invalid inputs and requests an input re-entry in such a case. This algorithm also stores the user inputs in variables that are ***private*** data members of the class i.e, a student's grades must only be accessed within the class.

*Our algorithm is well-ordered, unambigious, and contains an effectively computable set of operations, that when executed, returns an output in a finite amount of time.*

## What is/are the outputs you receive back?

After all the programming assignment, lab, MEC project, exam and final project grades have been entered, the total percentage point is computed and gives the final grade of the student. For example, if Student A had 40% on the programming assignments, 5% on the labs, 3% on the MEC project, 30% on the final project and 8% on the final exam, Student A would have a final percentage of `86.00%` and a letter grade of `B` is printed. 

## Pseudocode

Ask user how many assignments has been graded </br>
If more than 0 </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Enter assignment grades </br>
Ask user how many labs has been graded </br>
If more than 0 </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Enter lab grades </br>
Ask user how many parts of MEC project has been graded </br>
If more than 0 </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Enter MEC project grades </br>
Ask user if final project has been graded </br>
If yes </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Enter final project grade </br>
Ask user if final exam has been graded </br>
If yes </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Enter final exam grade </br>
Add up all grades </br>
Derive letter grade </br>
Print percentage points and letter grade </br>
</br>

<!--This algorithm takes in various inputs for the various grading portions of the course. For the assignments, it takes in the input of how many assignments has been graded, and a grade for each assignment graded. For the labs, it takes in the input of how many labs has been graded; and a grade for each lab graded. For the MEC project, it asks how many parts of the project has been graded, then asks for the grades of each part of the project graded. For the final project, it asks if the final project has been graded, if th input is yes, then it asks for the grade of the project. Finally, similar to the final project, it asks if the final exam, it asks if that has been graded, if yes, it then asks for the received grade. The output of the algorithm prints out the total percentage points of the user and a letter grade. -->

## Flowchart
```mermaid
 graph TD
     L(Start) --> A{Any assignment graded?};
     A --yes--> B>Enter assignment grades];
     A --no--> C{Any labs graded?};
     B --> C;
     C --yes--> D>Enter lab grades];
     C --no--> E{Any MEC project part graded?};
     D --> E;
     E --yes--> F>Enter MEC grades];
     E --no--> G{Final project graded?};
     F --> G;
     G --yes--> H>Enter project grade];
     G --no--> I{Final exam graded?};
     H --> I;
     I --yes--> J>Enter final exam grade];
     I --no--> K>Output total points and letter grade];
     J --> K;
     K --> M(End);
     
 ```

## Example Execution
![Execution Screenshot](https://github.com/Jeffrey401/gradebook-212/blob/main/exampleexec.png)

# Why was development like this important for our group?

Development like this was important for us because our algorithm shows how to track our grades throughout the semester from the start till the end. The way we developed this gradebook to store all our grades throughout the course of the semester to be able to check our progress in the course. We developed this gradebook algorithm to display grade points as well as letter grade. 
  

<!-- ## Detailed Instruction on how to compile the algorithm 
- How to input data
  When this program is run, it asks for how many programming assignments have been graded, then based off the number inputted by the user, it asks for the grades of each of the homework assignments, after the number of homework grades have been inputted the next thing asked is the number of labs that have been graded, based off the number of labs that have been inputted it asks the user for each of the lab grades. Afterwards, the program asks for how many parts of the MEC project that has been graded, based on hoe many have been graded it asks for the score of the parts graded, so if one has been graded it only asks for the score of the first part, and if both have been graded it asks for the grade of both of the MEC project. After is the final project, the program asks the user if the final project has been graded, if the input is N, it moves to the next part which is the final exam , but if the final project has been graded then it asks the user for the score of the final project. Then the last input would be the final exam. The program asks the user if the final exam has been graded, and then asks for the grade received for the final project.
   After all the input have been received, it outputs the total grade of the user and prints out the letter grade as well. For example: if the calculated final grade is 94 it prints out 94 and also prints out the letter grade A. -->




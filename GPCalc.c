#include <stdio.h>

// For first semester scores after multiplication with unit loads
float CGrade1, CGrade2, CGrade3, CGrade4, CGrade5, CGrade6;
// For second semester scores after multiplication with unit loads
float CGrade7, CGrade8, CGrade9, CGrade10, CGrade11, CGrade12;


// For first semester grades
char Grade1, Grade2, Grade3, Grade4, Grade5, Grade6;
// For second semester grades
char Grade7, Grade8, Grade9, Grade10, Grade11, Grade12;


// For first semester unit loads
int UnitL1, UnitL2, UnitL3, UnitL4, UnitL5, UnitL6;
// For second semester unit loads
int UnitL7, UnitL8, UnitL9, UnitL10, UnitL11, UnitL12;

float firstSemesterUnitLoads;
float firstSemesterUnitGrades;
float firstSemesterCGPA;

float secondSemesterUnitLoads;
float secondSemesterUnitGrades;
float secondSemesterCGPA;
float totalCGPA;

float secondSemesterUnitLoads;
float secondSemesterUnitGrades;
float secondemesterCGPA;
float CGPA;


int main() {
	
	printf("----------This a program that calculates your CGPA----------\n");
	printf("\n==>Enter your respective grades as A,B,C,D,E or F when instructed. \n");
	
	printf("\n|||||FOR FIRST SEMESTER COURSES||||||\n");

    while(1){

        printf("Enter your grade for course-1: ");
        scanf("%c", &Grade1);

        printf("Enter unit load for course-1: ");
        scanf("%d", &UnitL1);
        

        if( Grade1 == 65){
            printf("You entered grade %c", Grade1);
            CGrade1 = 5*UnitL1;
        }
            else if( Grade1 == 66){
                printf("You entered grade %c", Grade1);
                CGrade1 = 4*UnitL1;
            }
            else if( Grade1 == 67){
                printf("You entered grade %c", Grade1);
                CGrade1 = 3*UnitL1;
            }
            else if( Grade1 == 68){
                printf("You entered grade %c", Grade1);
                CGrade1 = 2*UnitL1;
            }
            else if( Grade1 == 69){
                printf("You entered grade %c", Grade1);
                CGrade1 = 1*UnitL1;
            }
            else if( Grade1 == 70){
                printf("You entered grade %c", Grade1);
                CGrade1 = 0*UnitL1;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade1);
            printf("Restart program!! \n");
            break;
        }

        printf("\n==================================== \n");
		printf("\nEnter your grade for course-2: ");
        scanf(" %c", &Grade2);

        printf("Enter unit load for course-2: ");
        scanf(" %d", &UnitL2);
        

        if( Grade2 == 65){
            printf("You entered grade %c", Grade2);
            CGrade2 = 5*UnitL2;
        }
            else if( Grade2 == 66){
                printf("You entered grade %c", Grade2);
                CGrade2 = 4*UnitL2;
            }
            else if( Grade2 == 67){
                printf("You entered grade %c", Grade2);
                CGrade2 = 3*UnitL2;
            }
            else if( Grade2 == 68){
                printf("You entered grade %c", Grade2);
                CGrade2 = 2*UnitL2;
            }
            else if( Grade2 == 69){
                printf("You entered grade %c", Grade2);
                CGrade2 = 1*UnitL2;
            }
            else if( Grade2 == 70){
                printf("You entered grade %c", Grade2);
                CGrade2 = 0*UnitL2;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade(A - B)!! \n", Grade2);
            printf("Restart program!! \n");
            break;
        }

        printf("\n==================================== \n");
		printf("\nEnter your grade for course-3: ");
        scanf(" %c", &Grade3);

        printf("Enter unit load for course-3: ");
        scanf(" %d", &UnitL3);

        if( Grade3 == 65){
            printf("You entered grade %c", Grade3);
            CGrade3 = 5*UnitL3;
        }
            else if( Grade3 == 66){
                printf("You entered grade %c", Grade3);
                CGrade3 = 4*UnitL3;
            }
            else if( Grade3 == 67){
                printf("You entered grade %c", Grade3);
                CGrade3 = 3*UnitL3;
            }
            else if( Grade3 == 68){
                printf("You entered grade %c", Grade3);
                CGrade3 = 2*UnitL3;
            }
            else if( Grade3 == 69){
                printf("You entered grade %c", Grade3);
                CGrade3 = 1*UnitL3;
            }
            else if( Grade3 == 70){
                printf("You entered grade %c", Grade3);
                CGrade3 = 0*UnitL3;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade3);
            printf("Restart program!! \n");
            break;
        }

        printf("\n==================================== \n");
		printf("\nEnter your grade for course-4: ");
        scanf(" %c", &Grade4);

        printf("Enter unit load for course-4: ");
        scanf(" %d", &UnitL4);

        if( Grade4 == 65){
            printf("You entered grade %c", Grade4);
            CGrade4 = 5*UnitL4;
        }
            else if( Grade4 == 66){
                printf("You entered grade %c", Grade4);
                CGrade4 = 4*UnitL4;
            }
            else if( Grade4 == 67){
                printf("You entered grade %c", Grade4);
                CGrade4 = 3*UnitL4;
            }
            else if( Grade4 == 68){
                printf("You entered grade %c", Grade4);
                CGrade4 = 2*UnitL4;
            }
            else if( Grade4 == 69){
                printf("You entered grade %c", Grade4);
                CGrade4 = 1*UnitL4;
            }
            else if( Grade4 == 70){
                printf("You entered grade %c", Grade4);
                CGrade4 = 0*UnitL4;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade4);
            printf("Restart program!! \n");
            break;
        }

        printf("\n==================================== \n");
		printf("\nEnter your grade for course-5: ");
        scanf(" %c", &Grade5);

        printf("Enter unit load for course-5: ");
        scanf(" %d", &UnitL5);

        if( Grade5 == 65){
            printf("You entered grade %c", Grade5);
            CGrade5 = 5*UnitL5;
        }
            else if( Grade5 == 66){
                printf("You entered grade %c", Grade5);
                CGrade5 = 4*UnitL5;
            }
            else if( Grade5 == 67){
                printf("You entered grade %c", Grade5);
                CGrade5 = 3*UnitL5;
            }
            else if( Grade5 == 68){
                printf("You entered grade %c", Grade5);
                CGrade5 = 2*UnitL5;
            }
            else if( Grade5 == 69){
                printf("You entered grade %c", Grade5);
                CGrade5 = 1*UnitL5;
            }
            else if( Grade5 == 70){
                printf("You entered grade %c", Grade5);
                CGrade5 = 0*UnitL5;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade5);
            printf("Restart program!! \n");
            break;
        }

        printf("\n==================================== \n");
		printf("\nEnter your grade for course-6: ");
        scanf(" %c", &Grade6);

        printf("Enter unit load for course-6: ");
        scanf(" %d", &UnitL6);

        if( Grade6 == 65){
            printf("You entered grade %c", Grade6);
            CGrade6 = 5*UnitL6;
        }
            else if( Grade6 == 66){
                printf("You entered grade %c", Grade6);
                CGrade6 = 4*UnitL6;
            }
            else if( Grade6 == 67){
                printf("You entered grade %c", Grade6);
                CGrade6 = 3*UnitL6;
            }
            else if( Grade6 == 68){
                printf("You entered grade %c", Grade6);
                CGrade6 = 2*UnitL6;
            }
            else if( Grade6 == 69){
                printf("You entered grade %c", Grade6);
                CGrade6 = 1*UnitL6;
            }
            else if( Grade6 == 70){
                printf("You entered grade %c", Grade6);
                CGrade6 = 0*UnitL6;
        }
        else{
            printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade6);
            printf("Restart program!! \n");
            break;
        }
        break;

    }

        printf("\n=================#####################=====================\n");
        
        firstSemesterUnitLoads = UnitL1 + UnitL2 + UnitL3 + UnitL4 + UnitL5 + UnitL6;
        firstSemesterUnitGrades = CGrade1 + CGrade2 + CGrade3 + CGrade4 + CGrade5 + CGrade6;
        firstSemesterCGPA = firstSemesterUnitGrades/firstSemesterUnitLoads;

        printf("\nThe total unit  for first semester is: %.2f \n",firstSemesterUnitLoads);
        printf("\nThe CGPA for first semester is: %.2f \n", firstSemesterCGPA);
        printf("\n=================#####################=====================\n");
        
        
        
        
        printf("\n|||||FOR SECOND SEMESTER COURSES||||||\n");
        
        
    while(1){

    printf("Enter your grade for course-1: ");
    scanf(" %c", &Grade7);

    printf("Enter unit load for course-1: ");
    scanf(" %d", &UnitL7);
    

    if( Grade7 == 65){
        printf("You entered grade %c", Grade7);
        CGrade7 = 5*UnitL7;
    }
        else if( Grade1 == 66){
            printf("You entered grade %c", Grade7);
            CGrade7 = 4*UnitL1;
        }
        else if( Grade1 == 67){
            printf("You entered grade %c", Grade7);
            CGrade7 = 3*UnitL1;
        }
        else if( Grade7 == 68){
            printf("You entered grade %c", Grade7);
            CGrade7 = 2*UnitL7;
        }
        else if( Grade7 == 69){
            printf("You entered grade %c", Grade7);
            CGrade7 = 1*UnitL1;
        }
        else if( Grade7 == 70){
            printf("You entered grade %c", Grade7);
            CGrade7 = 0*UnitL1;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade7);
        printf("Restart program!! \n");
        break;
    }

    printf("\n==================================== \n");
	printf("\nEnter your grade for course-2: ");
    scanf(" %c", &Grade8);

    printf("Enter unit load for course-2: ");
    scanf(" %d", &UnitL8);
    

    if( Grade8 == 65){
        printf("You entered grade %c", Grade8);
        CGrade8 = 5*UnitL8;
    }
        else if( Grade8 == 66){
            printf("You entered grade %c", Grade8);
            CGrade8 = 4*UnitL8;
        }
        else if( Grade8 == 67){
            printf("You entered grade %c", Grade8);
            CGrade8 = 3*UnitL8;
        }
        else if( Grade8 == 68){
            printf("You entered grade %c", Grade8);
            CGrade8 = 2*UnitL8;
        }
        else if( Grade8 == 69){
            printf("You entered grade %c", Grade8);
            CGrade8 = 1*UnitL8;
        }
        else if( Grade8 == 70){
            printf("You entered grade %c", Grade8);
            CGrade8 = 0*UnitL8;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade(A - B)!! \n", Grade8);
        printf("Restart program!! \n");
        break;
    }

    printf("\n==================================== \n");
	printf("\nEnter your grade for course-3: ");
    scanf(" %c", &Grade9);

    printf("Enter unit load for course-3: ");
    scanf(" %d", &UnitL9);

    if( Grade9 == 65){
        printf("You entered grade %c", Grade9);
        CGrade9 = 5*UnitL9;
    }
        else if( Grade9 == 66){
            printf("You entered grade %c", Grade9);
            CGrade9 = 4*UnitL9;
        }
        else if( Grade9 == 67){
            printf("You entered grade %c", Grade9);
            CGrade9 = 3*UnitL9;
        }
        else if( Grade9 == 68){
            printf("You entered grade %c", Grade9);
            CGrade9 = 2*UnitL9;
        }
        else if( Grade9 == 69){
            printf("You entered grade %c", Grade9);
            CGrade9 = 1*UnitL9;
        }
        else if( Grade9 == 70){
            printf("You entered grade %c", Grade9);
            CGrade9 = 0*UnitL9;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade9);
        printf("Restart program!! \n");
        break;
    }

    printf("\n==================================== \n");
	printf("\nEnter your grade for course-4: ");
    scanf(" %c", &Grade10);

    printf("Enter unit load for course-4: ");
    scanf(" %d", &UnitL10);

    if( Grade10 == 65){
        printf("You entered grade %c", Grade10);
        CGrade10 = 5*UnitL10;
    }
        else if( Grade10 == 66){
            printf("You entered grade %c", Grade10);
            CGrade10 = 4*UnitL10;
        }
        else if( Grade10 == 67){
            printf("You entered grade %c", Grade10);
            CGrade10 = 3*UnitL10;
        }
        else if( Grade10 == 68){
            printf("You entered grade %c", Grade10);
            CGrade10 = 2*UnitL10;
        }
        else if( Grade10 == 69){
            printf("You entered grade %c", Grade10);
            CGrade10 = 1*UnitL10;
        }
        else if( Grade10 == 70){
            printf("You entered grade %c", Grade10);
            CGrade10 = 0*UnitL10;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade10);
        printf("Restart program!! \n");
        break;
    }

    printf("\n==================================== \n");
	printf("\nEnter your grade for course-5: ");
    scanf(" %c", &Grade11);

    printf("Enter unit load for course-5: ");
    scanf(" %d", &UnitL11);

    if( Grade11 == 65){
        printf("You entered grade %c", Grade11);
        CGrade11 = 5*UnitL11;
    }
        else if( Grade11 == 66){
            printf("You entered grade %c", Grade11);
            CGrade11 = 4*UnitL11;
        }
        else if( Grade11 == 67){
            printf("You entered grade %c", Grade11);
            CGrade11 = 3*UnitL11;
        }
        else if( Grade11 == 68){
            printf("You entered grade %c", Grade11);
            CGrade11 = 2*UnitL11;
        }
        else if( Grade11 == 69){
            printf("You entered grade %c", Grade11);
            CGrade11 = 1*UnitL11;
        }
        else if( Grade11 == 70){
            printf("You entered grade %c", Grade11);
            CGrade11 = 0*UnitL11;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade11);
        printf("Restart program!! \n");
        break;
    }

    printf("\n==================================== \n");
	printf("\nEnter your grade for course-6: ");
    scanf(" %c", &Grade12);

    printf("Enter unit load for course-6: ");
    scanf(" %d", &UnitL12);

    if( Grade12 == 65){
        printf("You entered grade %c", Grade12);
        CGrade12 = 5*UnitL12;
    }
        else if( Grade12 == 66){
            printf("You entered grade %c", Grade12);
            CGrade12 = 4*UnitL12;
        }
        else if( Grade12 == 67){
            printf("You entered grade %c", Grade12);
            CGrade12 = 3*UnitL12;
        }
        else if( Grade12 == 68){
            printf("You entered grade %c", Grade12);
            CGrade12 = 2*UnitL12;
        }
        else if( Grade12 == 69){
            printf("You entered grade %c", Grade12);
            CGrade12 = 1*UnitL12;
        }
        else if( Grade12 == 70){
            printf("You entered grade %c", Grade12);
            CGrade12 = 0*UnitL12;
    }
    else{
        printf("The character %c you entered is not a grade \n Please enter a proper grade!! \n", Grade12);
        printf("Restart program!! \n");
        break;
    }
    break;

}
	printf("\n=================#####################=====================\n");
        
        secondSemesterUnitLoads = UnitL7 + UnitL8 + UnitL9 + UnitL10 + UnitL11 + UnitL12;
        secondSemesterUnitGrades = CGrade7 + CGrade8 + CGrade9 + CGrade10 + CGrade11 + CGrade12;
        secondSemesterCGPA = secondSemesterUnitGrades/secondSemesterUnitLoads;
        totalCGPA = (secondSemesterCGPA + firstSemesterCGPA)/2;

        printf("\nThe total unit  for first semester is: %.2f \n",firstSemesterUnitLoads);
        printf("\nThe total unit  for second semester is: %.2f \n",secondSemesterUnitLoads);
        printf("\nThe CGPA for first semester is: %.2f \n", firstSemesterCGPA);
        printf("\nThe CGPA for second semester is: %.2f \n", secondSemesterCGPA);

        printf("\n=================#####################=====================\n");
        
        printf("\nYour CGPA for this session is: %.2f\n", totalCGPA);


    return(0);

}

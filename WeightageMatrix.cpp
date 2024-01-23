/**** DO NOT MODIFY BLOCK - STARTS ****/

#include <stdio.h>
void admindroidMain(int size,int arr[][10],int weightageArray[][10]);
void printArray(int rows,int cols,int arr[][10]);
void validateTestCases(int testCase,int size,int inputArr[][10],int expectedOutputArr[][10]);
int areArraysEqual(int size, int array1[][10], int array2[][10]);

int main() {
    int testcase1_inputArr[10][10]={
        {1,2,2,5},
        {2,0,2,4},
        {0,1,1,4},
        {1,2,9,3}
    };
    int testcase1_outputArr[10][10]={
        {10,4},
        {8,5},
        {6,14},
        {15,16}
    };
    validateTestCases(1,4,testcase1_inputArr,testcase1_outputArr);
    int testcase2_inputArr[10][10] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {10, 20, 30, 40},
        {9, 18, 27, 36}
    };
    int testcase2_outputArr[10][10] ={
        {20,22},
        {16,45},
        {100,68},
        {90,91}
    };
    validateTestCases(2,4,testcase2_inputArr,testcase2_outputArr);
    int testcase3_inputArr[10][10] = {
        {3, 0, 0, 0, 0},
        {0, 6, 0, 0, 0},
        {0, 0, 9, 0, 0},
        {0, 0, 0, 12, 0},
        {0, 0, 0, 0, 15}
    }; 
    int testcase3_outputArr[10][10]={
        {3,3},
        {6,6},
        {9,9},
        {12,12},
        {15,15}
    };
    validateTestCases(3,5,testcase3_inputArr,testcase3_outputArr);
	return 0;
}

void printArray(int rows,int cols,int arr[][10]){
    for(int i=0;i<rows;++i){
         for(int j=0;j<cols;++j){
             printf("%6d", arr[i][j]); // %6d is used only for formatting.
         }
        printf("\n");
     }
     printf("\n");
}

void validateTestCases(int testCase,int size,int inputArr[][10],int expectedOutputArr[][10]){
    int weightageArr[10][10] = {0};
    admindroidMain(size,inputArr,weightageArr);
    printf("Test Case %d : \n\n",testCase);
    printf("Input Array : \n\n");
    printArray(size,size,inputArr);
    printf("Output Array : \n\n");
    printArray(size,2,weightageArr);
    int comparisonResult = areArraysEqual(size,weightageArr,expectedOutputArr);
    if(comparisonResult == 1){
        printf("Result : Test Case %d Passed\n\n",testCase);
    }
    else{
        printf("Result : Test Case %d Failed\n\n",testCase);
    }
}

int areArraysEqual(int size, int array1[][10], int array2[][10]) {
	
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (array1[i][j] != array2[i][j]) {
                return 0;  // Arrays are not equal
            }
        }
    }
    return 1;
}

/**** DO NOT MODIFY BLOCK - ENDS ****/
/* UPLOAD THIS BLOCK ONLY - STARTS */

/*
Name: Priyadharshini.V
Mobile Number: 9361306986
Discord Name: 
College:University College Of Engineering Kanchipuram
Dept: Computer Science and Engineering
*/

void sampleFunctionJustToShowYou(); // Function definitions can be added here.

void admindroidMain(int size,int arr[][10],int weightageArray[][10]) // Do not modify this line.
{
   //Do your logic here.
    for(int i=0;i<size;i++){
       weightageArray[i][1]=0;
        for(int j=0;j<size;j++){
            weightageArray[i][0] = weightageArray[i][0] + arr[i][j];
            weightageArray[i][1] = weightageArray[i][1] + arr[j][i];
        }
        
    }
    
   
   sampleFunctionJustToShowYou();	// Just showing for a demo. You can use your own functions.
}

// You can add extra functions here.

void sampleFunctionJustToShowYou() { 	// Just showing for a demo. You can use your own functions if needed.
	// SOme code here...
}

/* UPLOAD THIS BLOCK ONLY - STARTS */

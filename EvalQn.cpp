/* UPLOAD THIS BLOCK ONLY - STARTS */

/*
Name: Priyadharshini.V
Mobile Number: 9361306986
Discord Name: priyadharshini0474 
College: University College Of Engineering Kanchipuram
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
/* UPLOAD THIS BLOCK ONLY - STARTS */

/*
Name: V.Priyadharshini
Mobile Number: 9361306986
Discord Name: priyadharshini0474
College: University College of Engineering Kanchipuram
Dept: Computer Science and Engineering
*/

void sampleFunctionJustToShowYou(); // Function definitions can be added here.

void admindroidMain(int size, int inputArr[][10], int weightageArray[][10]) // Do not modify this line.
{
   //Do your logic here.
   int cw=0,w=0,bw;
   for(int i=1;i<size-1;i++){
   	for(int j=1;j<size-1;j++){
   		cw = cw+inputArr[i][j];//core weightage
	   }
   }
//   printf("%d",cw);
   for(int i=0;i<size;i++){
   	for(int j=0;j<size;j++){
   		w=w+inputArr[i][j];
	   }
   }
   bw = w-cw;//border weight =whole weight - core weight
   
   for(int i=0;i<1;i++){
   	
   		weightageArray[i][0]=bw;
   		weightageArray[i][1]=cw;
	   
   }
   
   sampleFunctionJustToShowYou();	// Just showing for a demo. You can use your own functions.
}

// You can add extra functions here.

void sampleFunctionJustToShowYou() { 	// Just showing for a demo. You can use your own functions if needed.
	// Some code here...
}

/* UPLOAD THIS BLOCK ONLY - ENDS */
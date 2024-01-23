/* UPLOAD THIS BLOCK ONLY - STARTS */

/*
Name: V.Priyadharshini
Mobile Number: 9361306986
Discord Name: priyadharshini0474
College: University College Of Engineering Kanchipuram
Dept: Computer Science and Engineering
*/

void sampleFunctionJustToShowYou(); // Function definitions can be added here.
void coreWeightage();

void admindroidMain(int size, int inputArr[][10], int coreArray[][10],int coreWeightage[2]) // Do not modify this line.
{
   //sampleFunctionJustToShowYou();	// Just showing for a demo. You can use your own functions.
   
   
//  

     int sum = 0,bw,cwm=0,cw=0, mod,c;
     mod = size*size;
     c=size/2;
   

     for(int i=1;i<size-1;i++){		 
     	for(int j=1;j<size-1;j++){
            sum =0;
            if(i==c && j==c){
            	for(int m=0;m<size;m++){
            		for(int n=0;n<size;n++){
            			sum = sum +inputArr[m][n];
					}
				}
				inputArr[i][j]= sum-inputArr[i][j];
			}else{
					for(int k=i-1;k<=i+1;k++){
     			for(int l=j-1;l<=j+1;l++){
     					sum = sum +inputArr[k][l];
						 }
			 }
			 inputArr[i][j]= sum-inputArr[i][j];
			}
     	
     		 
		 }
    }
    

//    finding core weightage
     
	for(int i=1;i<size-1;i++){
	 	for(int j=1;j<size-1;j++){
	 		cw=cw+inputArr[i][j];
		 }
	 }

	 

//    finding modulo 
	 for(int i=1;i<size-1;i++){
	 	for(int j=0;j<size-1;j++){
	 		inputArr[i][j]=inputArr[i][j] % mod;
		 }
	 }
	 
// finding core weightage after modulo
  
	for(int i=1;i<size-1;i++){
	 	for(int j=1;j<size-1;j++){
	 		cwm=cwm+inputArr[i][j];
		 }
	 }

	
//	 core Array
    for(int i=1;i<size-1;i++){
   		for(int j=1;j<size-1;j++){
			coreArray[i-1][j-1] = inputArr[i][j];
	   		}
	    printf("\n");
   	}
   	
//   core Weightage

    	coreWeightage[0] = cw;
    	coreWeightage[1] = cwm;

   	

	 
}

// You can add extra functions here.

void sampleFunctionJustToShowYou() { 	// Just showing for a demo. You can use your own functions if needed.
	// Some code here...
}

/* UPLOAD THIS BLOCK ONLY - ENDS */
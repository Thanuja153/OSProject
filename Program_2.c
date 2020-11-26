#include<stdio.h>
void main()
{
int state = 0, i = 0 ; //i is used to hold the index of the current value

char current , input[100]; //input[100] is an array  to hold entire input string

printf("Enter input string :-"); 
 
scanf("%s",input);  //Taking the input of the String

while((current = input[i++])!='\0')  //to read one after another char of input and storing in ("current") till end of string
{

switch(state) //switch case used to shift between multiple cases
{
    
case 0:    // Case 0  is for state Q0

    if(current=='a')    // if next state is a
        state=1;
    else if(current=='b')       // if next state is b
         state=2;
    else{                        // if next state is neither a nor b
      printf("Invalid token");    
     exit(0);
  }
break;

case 1:  //Case 1 is  for state  Q1
    
    if(current=='a')        // if next state is a
        state=3;
    else if(current=='b')           // if next state is b
        state=2;
    else{                            // if next state is neither a nor b
        printf("Invalid token");
exit(0);
}
break;

case 2: //Case 2 is for state Q2

    if(current=='a')        // if next state is a
        state=1;
    else if(current=='b')           // if next state is b
        state=4;
    else{                            // if next state is neither a nor b
        printf("Invalid token");
        exit(0);
}
break;

case 3: //Case 3 is for state Q3

    if(current=='a')        // if next state is a
        state=3;
    else if(current=='b')           // if next state is b
        state=2;
    else{                            // if next state is neither a nor b
        printf("Invalid token");
        exit(0);
}
break;

case 4:  //Case 4 is for state  Q4

    if(current=='a')    // if next state is a
        state=1;
    else if(current=='b')       // if next state is b
        state=4;
    else{                        // if next state is neither a nor b
        printf("Invalid token");
        exit(0);
}
break;
}

}
//determining the final  state

if(state==3||state==4)      // final states are Q3 and Q4 and we assigned states 3 and 4 to them
   printf("\nString accepted");
else
   printf("\nString not accepted");
}

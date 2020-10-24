#include <stdio.h>
#include <math.h>
/*
Name: Abhiram Ajith - 20364441
Date: 19/10/2020
Title: A program that lets users use the compound interest formula to get any value they require
Input: 4 variables amount, rate, years and principal
Expected output: The desired value for the calculation you want to perform.
*/

int main(void){

/*Declaring the variables*/
double const k = 12;
/*Amount*/
double a;
/*Principal*/
double p;
/*Interest rate*/
double r;
/*Number of years*/
double n;
/* value of option chosen*/
int x;

/*Asking user which calculation they would like to compute*/
printf("Which value would you like to compute: 1) Amount 2) Principal 3) Rate 4) Number of years\n");
printf("Select either 1, 2, 3 or 4.\n");
/*Retrieving user input*/
scanf("%d", &x);

/*These If statements carry out the calculation necessary depending on the value of x given by the user*/

/*Calculates Amount*/
if (x==1){
  /* Asking for user to input values for p, r and n*/
  printf("Please enter the principal:\n");
  /* Retrieving the value inputted by the user*/
  scanf("%lf", &p);
  /* Checking if the principal is valid*/
  if (p<0){
    printf("Invalid principal.\n");
    return -1;
  }


  printf("Please enter the rate:\n");
  scanf("%lf", &r);
  /*There are two possibilities so OR is used*/
  if (r<=0 || r>=100){
    printf("Invalid rate.\n");
    return -1;
  }


  printf("Please enter the number of years:\n");
  scanf("%lf", &n);

  if (n<=0){
    printf("Invalid number of years.\n");
    return -1;
  }
  /*Calculating the formula*/
  double amount = p*(pow(1+(r/(100*k)),n*k));
  /*printing the output*/
  printf("The amount is %.2f\n",amount );
}



/*Calculates Principal*/
else if (x==2){
  printf("Please enter the amount:\n");
  /* Retrieving the value inputted by the user*/
  scanf("%lf", &a);
  /* Checking if the amount is valid*/
  if (a<0){
    printf("Invalid amount.\n");
    return -1;
  }


  printf("Please enter the rate:\n");
  scanf("%lf", &r);
  /*There are two possibilities so OR is used*/
  if (r<=0 || r>=100){
    printf("Invalid rate.\n");
    return -1;
  }


  printf("Please enter the number of years:\n");
  scanf("%lf", &n);

  if (n<=0){
    printf("Invalid number of years.\n");
    return -1;
  }
  /*Calculating the formula*/
  double principal = a/(pow(1+(r/(100*k)),n*k));
  /*printing the output*/
  printf("The principal is %.2f\n",principal );
}



/*Calculates Rate*/
else if (x==3){
  printf("Please enter the amount:\n");
  /* Retrieving the value inputted by the user*/
  scanf("%lf", &a);
  /* Checking if the amount is valid*/
  if (a<0){
    printf("Invalid amount.\n");
    return -1;
  }


  printf("Please enter the principal:\n");

  scanf("%lf", &p);

  if (p<0){
    printf("Invalid principal.\n");
    return -1;
  }


  printf("Please enter the number of years:\n");

  scanf("%lf", &n);

  if (n<=0){
    printf("Invalid number of years.\n");
    return -1;
  }
  /*Calculating the formula*/
  double rate = (100*k)*(pow((a/p),(1/(n*k))))-(100*k);
  /*printing the output*/
  printf("The rate is %.2f\n",rate );

}



/*Calculates number of years*/
else if (x==4){
  printf("Please enter the amount:\n");
  /* Retrieving the value inputted by the user*/
  scanf("%lf", &a);
  /* Checking if the amount is valid*/
  if (a<0){
    printf("Invalid amount.\n");
    return -1;
  }


  printf("Please enter the principal:\n");

  scanf("%lf", &p);

  if (p<0){
    printf("Invalid principal.\n");
    return -1;
  }


  printf("Please enter the rate:\n");

  scanf("%lf", &r);

  /*There are two possibilities so OR is used*/
  if (r<=0 || r>=100){
    printf("Invalid rate.\n");
    return -1;
  }
  /*Calculating the formula, I split into to two to avoid confusion*/
  double x = log(a/p);
  double y = ((k)*(log(1+(r/100)/(k))));
  double year = x/y;

  /*printing the output*/
  printf("The number of years is %.2f\n",year );

}



/*If the value of x inputted is not between 1 and 5 it will print the following*/
else {
  printf("Invalid option.\n");
}
return 0;
}

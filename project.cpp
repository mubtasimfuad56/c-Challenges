#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
 //using namespace std;
int main (){
/*
  int num;
  int guess;
  int tries = 0 ;

  srand(time(NULL));
  num = (rand() % 10)+ 1 ;

  std:: cout << "******** NUMBER GUESSING GAME ******** \n ";
do{
std:: cout << " Enter a guess between (1- 100): ";
std:: cin >> guess;
tries ++;


if (guess > num){
  std:: cout << " too high! \n";}
else if ( guess < num){
  std:: cout << " too low \n";}
else {std:: cout << "CORRECT! # of tries: " << tries << '\n';}

}while (guess != num);

  std:: cout << "******** NUMBER GUESSING GAME ******** \n ";
*/

// 0-10
    int num = 0;
    while (num <= 10){
      std:: cout << num << "\n" ;
      num++;
    }
// 2-20
 int num = 2;
 while ( num <= 20 ){
   int result = num % 2;
if ( result == 0 ){
  std:: cout<< num  << " \n" ;
}
   num++;
 }
// sum of 1-10
int Nnum =0;
int sequence =0;
while (Nnum<=10){
  Nnum = Nnum + sequence;
 sequence++;
}
  std:: cout<< Nnum << "\n";

  // miltiplication of no 5
  int i = 1 ;
int num = 5 ;
while (i<=10){
  int results = num * i;
std:: cout << "5 * "<< i << " = " << results << "\n";
  i++;
}

//reverse number 10-1
int reverse = 10;
while (reverse >= 1){
  std:: cout << reverse << "\n";
  reverse--;
}

// print number using for loop 1 -100
 int print;
    for ( print = 1; print <= 100; ++print){
      std:: cout << print << "\n";
    }

// 1-50 odd number
 int num;
   int odd;
   for(odd=1;odd<=50;++odd){
    num = odd % 2;
     if (odd != 0){
       std:: cout << odd << "\n";
     }
     odd++;
   }

   //multiplication of user input
   int i;
   int result;
  int number;
std:: cout << "type your number: \n";
std:: cin>> number;
   for ( i=1;i<=10;++
     result = number *i;
     std:: cout<< number << " * "<< i << " = " << result << "\n";
   }

//square of 1-10 , include cmath must
int i;
int result;
for (i=1;i<=10;++i){
  result = pow(i,2);
  std:: cout<< i << " ^ " << "2 = " << result << "\n";
}

//first 10 multiples of 3
 int i;
 int result;
 for (i=1;i<=10;++i){
 result = i * 3;
 std:: cout<< 3 << " * " << i << " = " << result << "\n ";
 }


 


return 0;
}

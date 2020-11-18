#ifndef _MY_ISBN_H_
#define _MY_ISBN_H_
#include "cstring"
#include <iostream>
using namespace std;

const int max_length = 256;
class MyISBN
{
public:

// constructors
MyISBN ();
MyISBN (char isbn_number[]);
// utility functions
bool isCorrectNumber() const;
private:
char isbn[max_length+11];
bool isSyntaxValid() const;
bool isCheckSumValid() const;
};
#endif // _MY_ISBN_H_


// constructors
MyISBN::MyISBN ()
{
isbn[0] = '\0';
}
MyISBN::MyISBN (char isbn_number[])
{
strcpy(isbn, isbn_number);
}
// utility functions
bool MyISBN::isCorrectNumber() const
{
if (isSyntaxValid() && isCheckSumValid())
return true;
else
return false;
}
// private functions
bool MyISBN::isSyntaxValid() const
{
  int num[3];
  int count = 0;
  for(int i = 0; i < strlen(isbn); i ++){
    if(isbn[i] == '0' || isbn[i] == '1' ||isbn[i] == '2' ||isbn[i] == '3' ||
  isbn[i] == '4' ||isbn[i] == '5' ||isbn[i] == '6' ||isbn[i] == '7' ||
isbn[i] == '8' ||isbn[i] == '9' ||isbn[i] == '-' ||isbn[i] == 'X'){
    if(isbn[i] == '-'){
      num[count] = i;
      count++;
    }
}else{
  return false;
  }
}
if(count != 3){
  return false;
  }

if(num[0] < 1 || num[0] > 5){
  return false;
}else if(num[1]-num[0] == 1 || num[1]-num[0] > 8){
  return false;
}else if(num[2]-num[1] == 1 || num[2]-num[1] > 7){
  return false;
}else if(strlen(isbn) - num[2] -1 != 1){
  return false;
}
return true;
}

bool MyISBN::isCheckSumValid() const
{
  int count = 0;
  for(int i = 0; i < strlen(isbn); i++){
    if(isbn[i] == '-'){
    }else{
      count++;
    }
  }
  char num1[count];
  int num2[count];
  count = 0;
  for(int i = 0; i < strlen(isbn); i++){
    if(isbn[i] == '-'){
    }else{
      num1[count] = isbn[i];
      num2[count] = isbn[i] - '0';
      count++;
    }
  }
  int sum=0;
  for(int i = 0; i <count; i++){
  }
  for(int i = 0; i < count; i++){
    if(num2[i] == 40){
      sum += 10;
    }else{
      sum += num2[i]*(10-i);
    }
}
  if(sum % 11 == 0){
    return true;
  }else{
    return false;
  }
}



int main()
{
int numTestCases;
cin >> numTestCases;
for (int i=0; i<numTestCases; i++)
{
char isbn[max_length+1];
cin >> isbn;
MyISBN bookNumber(isbn);
if(bookNumber.isCorrectNumber())
cout << "1" << endl;
else
cout << "0" << endl;
}
return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#ifndef _MY_HAMMING_DISTANCE_H_
#define _MY_HAMMING_DISTANCE_H_
class MyBinaryNumber
{
public:
// constructors
MyBinaryNumber ();
MyBinaryNumber (unsigned int val);
// accessor/mutator functions
unsigned int getValue() const;
void setValue(unsigned int val);
// utility function
int getHammingWeight() const;
int getHammingDistance(const MyBinaryNumber& bn) const;
private:
unsigned int value;
};
#endif // _MY_HAMMING_DISTANCE_H_

#define XOR(a,b) (!(a)^!(b))
// constructors
MyBinaryNumber::MyBinaryNumber ()
:value(0)
{
}
MyBinaryNumber::MyBinaryNumber (unsigned int val)
:value(val)
{
}
// accessor functions
unsigned int MyBinaryNumber::getValue () const
{
return value;
}
// mutator functions
void MyBinaryNumber::setValue (unsigned int val)
{
value = val;
}
// 어떤 정수의 해밍 무게를 계산하는 함수
int MyBinaryNumber::getHammingWeight() const
{
  int count = 0;
  int a = value;
  for(int i = 0; i < 32; i++){
    if(a % 2 == 1){
      count++;
    }
    a /= 2;
  }
  return count;
}
// comptue Hamming Distance
int MyBinaryNumber::getHammingDistance(const MyBinaryNumber& bn) const
{
  int count = 0;
  int a = value, b = bn.value;
  for(int i = 0; i < 32; i++){
    if(a%2 != b%2){
      count++;
    }
    a /= 2;
    b /= 2;
  }
  return count;
}


int main()
{
int numTestCases;
cin >> numTestCases;
for(int i=0; i<numTestCases; i++)
{
unsigned int num1, num2;
cin >> num1 >> num2;
MyBinaryNumber bn1(num1), bn2(num2);
cout << bn1.getHammingWeight() << " " << bn2.getHammingWeight() << " "
<< bn1.getHammingDistance(bn2) << endl;
}
return 0;
}

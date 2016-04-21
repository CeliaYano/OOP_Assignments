#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"enter a number:";
cin>>number;
if(number<0)
{
cout<<"No negative number allowed!\n";
return 1;
}
if (number>20){
cout<<"Program will not produce correct results!\n";
}
int accumulator=1;//corrected otherwise won't run.
for(;number>0;accumulator*=number--);
cout<<"The factorial of"<<number<<"is"<<accumulator<<"\n";
return 0;//the output is correct.
}
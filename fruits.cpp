#include <iostream>

class CitrusFruit{
protected:
  float ph;
public:
  CitrusFruit(float ph) : ph(ph){}
  virtual const char * getName(){ return "Citrus Fruit";}
  virtual float getPh(){ return ph;  }
};

class Lemon : public CitrusFruit {
public:
  Lemon(float ph) : CitrusFruit(ph){}
  virtual const char * getName(){ return "Lemon Fruit";}
  virtual float getPh(){ return ph * 2.0;  }
};
 class Orange : public CitrusFruit {
 public:
 Orange(float ph) : CitrusFruit(ph){}
 virtual const char * getName(){ return "Orange Fruit";}
 virtual float getPh(){ return ph * 0.5; }
 };
 
Lemon le1(1.4), le2(1.5), le3(1.234);
Orange or1(0.4), or2(0.3), or3(0.5);
CitrusFruit *cfruits[] = {&le1, &le2, &le3, &or1, &or2, &or3};
using namespace std;

void PrintTheFruits(CitrusFruit &fruit){
      cout << "fruit is a " << fruit.getName()
 << " and has a pH " << fruit.getPh() << endl;
}
int main(){
  Lemon lemon(2.0);
  //This is perfectly legal!
  
  CitrusFruit &rlemon = lemon;
  CitrusFruit *plemon = &lemon;
  
for(int i = 0; i < 6; i++)
cout << cfruits[i]->getName() << " has a pH "
<< cfruits[i]->getPh() << endl;


  }

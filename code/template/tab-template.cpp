#include <iostream>

using namespace std;

template<int nbcases>
class TableauInt
{
public:
   int cases[nbcases];
};

template<typename T>
class TableauDynamique
{
public:
   T *cases;

   TableauDynamique(int taille)
   {
      cases = new int[taille];
   }

   ~TableauDynamique()
   {
      cout << "Argh !" << endl;
      delete [] cases;
   }

};

int main(void)
{
   TableauInt<10> t;
   t.cases[3] = 12;
   TableauDynamique<int> *t2;
   t2 = new TableauDynamique<int>(20);
   delete t2;
}

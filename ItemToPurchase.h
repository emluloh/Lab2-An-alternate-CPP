//Eileen Luloh

#ifndef ItemToPurchase_H_
#define ItemToPurchase_H_

#include <string>

using namespace std;

class ItemToPurchase
{
private:
   string itemName;
   double itemPrice;
   int itemQuantity;
   
public:
   ItemToPurchase();

   void SetName(string name);
   void SetPrice(double price);
   void SetQuantity(int quantity);

   string GetName();
   double GetPrice();
   int GetQuantity();
};

#endif
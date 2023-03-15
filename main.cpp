//Eileen Luloh

#include "ItemToPurchase.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
ItemToPurchase item1, item2;
string n;
double p;
int q;
//input for Item 1
cout << "Item 1" << endl;
cout << "Enter the item name:\n";
getline(cin, n);
cout << "Enter the item price:\n";
cin >> p;
cout << "Enter the item quantity:\n";
cin >> q;
item1.SetName(n);
item1.SetPrice(p);
item1.SetQuantity(q);
//input for Item 2
cin.ignore(); //to allow the user to input new string
cout << "\nItem 2" << endl;
cout << "Enter the item name:\n";
getline(cin, n);
cout << "Enter the item price:\n";
cin >> p;
cout << "Enter the item quantity:\n";
cin >> q;
item2.SetName(n);
item2.SetPrice(p);
item2.SetQuantity(q);
cout << "\nTOTAL COST" << endl;
cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;
cout << "\nTotal: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;
return 0;
}
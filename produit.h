#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std; 

class Product{

	public:
		//Constructor
		Product(int id, string label, string details, int quantity, float price);
		//Guetters
		int id();
		string label();
		string details();
		int quantity();
		float price();
		//Setteurs
		void updateId(int id);
		void updateLabel(string label);
		void updateDetails(string details);
		void updateQuantity(int quantity);
		void updatePrice(int price);

	private: 
		int _id;
		string _label;
		string _details; 
		int _quantity; 
		float _price;
};

#endif
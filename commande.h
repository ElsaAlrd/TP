#ifndef COMMANDE_H
#define COMMANDE_H

#include <iostream>
#include <string>
#include <vector>
#include "client.h"

using namespace std; 

class Order{

	public:
		//Constructor
		Order(int id, Client client, vector<int> products, bool delivered);
		//Guetters
		int id();
		Client client();
		vector<int> products();
		bool delivered();
		//Setteurs
		void updateId(int id);
		void updateClient(Client client);
		void updateProducts(vector<int> products);
		void updateDelivered(bool delivered);

	private: 
		int _id;
		Client _client;
        vector<int> _products;
        bool _delivered;
};

#endif
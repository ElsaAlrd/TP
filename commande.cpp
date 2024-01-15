#include "commande.h"

//Constructor
Order::Order(int id, Client client, vector<int> products, bool delivered){
    this->_id = id;
    this->_client = client;
    this->_products = products;
    this->_delivered = delivered;
}

//Guetters
int Order::id(){
    return this->_id;
}

Client Order::client(){
    return this->_client;
}

vector<int> Order::products(){
    return this->_products;
}

bool Order::delivered(){
    return this->_delivered;
}

//Setteurs
void Order::updateId(int id){
    this->_id = id;
}

void Order::updateClient(Client client){
    this->_client = client;
}

void Order::updateProducts(vector<int> products){
    this->_products = products;
}

void Order::updateDelivered(bool delivered){
    this->_delivered = delivered;
}
#include "client.h"

//Constructors
Client::Client(){
    this->_id = 0;
    this->_first_name = "";
    this->_last_name = "";
    this->_purchases = {};
}

Client::Client(int id, string first_name, string last_name, vector<int> purchases){
    this->_id = id;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_purchases = purchases;
}

//Guetters
int Client::id(){
    return this->_id;
}

string Client::first_name(){
    return this->_first_name;
}

string Client::last_name(){
    return this->_last_name;
}

vector<int> Client::purchases(){
    return this->_purchases;
}

//Setteurs
void Client::updateId(int id){
    this->_id = id;
}

void Client::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Client::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Client::addPurchase(int idProduct){
    this->_purchases.push_back(idProduct);
}

void Client::removePurchase(int idProduct){
    this->_purchases.erase(remove(this->_purchases.begin(), this->_purchases.end(), idProduct), this->_purchases.end());
}
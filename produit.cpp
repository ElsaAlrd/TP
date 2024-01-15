#include "produit.h"
#include <string>
using namespace std;

//Constructor
Product::Product(int id, string label, string details, int quantity, float price){
    this->_id = id;
    this->_label = label;
    this->_details = details;
    this->_quantity = quantity;
    this->_price = price;
}

//Getteurs
int Product::id(){
    return this->_id;
}

string Product::label(){
    return this->_label;
}

string Product::details(){
    return this->_details;
}

int Product::quantity(){
    return this->_quantity;
}

float Product::price(){
    return this->_price;
}

//Setteurs
void Product::updateId(int id){
    this->_id = id;
}

void Product::updateLabel(string label){
    this->_label = label;
}

void Product::updateDetails(string details){
    this->_details = details;
}

void Product::updateQuantity(int quantity){
    this->_quantity = quantity;
}

void Product::updatePrice(int price){
    this->_price = price;
}

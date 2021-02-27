#include "SectionCHeader.h"
#include <iostream>
#include <array>


item::item(std::string name, long id, double price, int stock)
	: myname{ name }, myid{ id }, myprice{ price }, mystock{ stock } {};

store::store()
	: itemsinStore() {};

void store::newItem(item item) {
	itemsinStore.push_back(item);
}

std::vector<item> store::getItems() {
	return itemsinStore;
}

int store::calculateTotalItems() {
	std::vector<item> itemsinStore = getItems();
	int count = 0;
	for (int i = 0; i < itemsinStore.size(); i++) {
		count += (itemsinStore.at(i)).mystock;
	}
	return count;
}

void printItemsandStock(store store) {
	std::vector<item> itemsinStore = store.getItems();
	for (int i = 0; i < itemsinStore.size(); i++) {
		std::cout << (itemsinStore.at(i)).myname << " x " << (itemsinStore.at(i)).mystock << "\n";
	}

}

order::order()
	: cart() {};

std::vector<item> order::getOrders() {
	return cart;
}

void order::addItems(item item) {
	cart.push_back(item);
}

double order::getTotalPrice()
{
	std::vector<item> cart = getOrders();
	double totalPrice = 0;
	for (int i = 0; i < cart.size(); i++) {
		totalPrice += (cart.at(i)).myprice;
	}
	return totalPrice;
}
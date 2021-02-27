#pragma once

#include <string>
#include <vector>


class item {
public:
	item(std::string name, long id, double price, int stock);

	std::string myname;
	long myid;
	double myprice;
	int mystock;

};

class store {
public:
	store();
	std::vector<item> getItems();
	void newItem(item item);
	int calculateTotalItems();
private:
	std::vector<item> itemsinStore;

};

void printItemsandStock(store store);

class order {
public:
	order();
	std::vector<item> getOrders();
	void addItems(item item);
	double getTotalPrice();

private:
	std::vector<item> cart;

}
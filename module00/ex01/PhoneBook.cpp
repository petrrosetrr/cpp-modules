//
// Created by Jimmie Alease on 6/18/21.
//

#include "PhoneBook.h"

PhoneBook::PhoneBook() {};

Contact &PhoneBook::getContact(int index) {
	return contacts[index % 8];
}


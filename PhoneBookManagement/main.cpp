#include<iostream>
#include<string>
#include"PhoneBookManager.h"
using namespace std;

int main(void) {
	PhoneBookManager *manager = new PhoneBookManager();

	while (true) {
		manager->run();
	}
}
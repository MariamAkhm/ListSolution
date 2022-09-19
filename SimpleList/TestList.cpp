#include <iostream>
#include "TestList.h"
#include "List.h"

namespace ListSpace {
	namespace TestList {
		void test1() {
			ListSpace::List l{ "Almaz", 95 };
			std::cout << "My name is: " << l.name << "; My mark is: " << static_cast<int>(l.mark) << std::endl;
		}
		void test2() {
			ListSpace::List l;
			l.next = new ListSpace::List{"Mariam", 80};
			std::cout << "My name is: " << l.next->name << "; My mark is: " << static_cast<int>(l.next->mark) << std::endl;
		}
		void test3() {
			ListSpace::List* head{ nullptr };
			head = new ListSpace::List{ "Artur", 100 };
			ListSpace::List l2{ "Dasha", 56 };
			head->next = &l2; //создали список из двух записей, (от начала (хед) к л2 (даша))
			ListSpace::List* root{ head };
			while (root != nullptr) {
				std::cout << "My name is: " << root->name << "; My mark is: " << static_cast<int>(root->mark) << std::endl;
				root = root->next;
			}
			bool f = hasLoop(root);
			std::cout << f;
		}
		bool hasLoop(ListSpace::List* head) {
			if (head == nullptr)
			{
				return false;
			}
			ListSpace::List* tortoise = head;
			ListSpace::List* hare = head;
			while (hare != nullptr && hare->next != nullptr) {
				hare = hare->next->next;
				tortoise = tortoise->next;
				if (tortoise == hare) {
					return true;
				}
			}
		}
	};
}	



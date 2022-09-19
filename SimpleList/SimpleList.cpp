#include <iostream>
#include <list>
#include <string>
#include "List.h"
#include "TestList.h"

int main()
{
    ListSpace::TestList::test1();
    std::cout << sizeof(ListSpace::List)<<"\n";
    ListSpace::TestList::test2();
    ListSpace::TestList::test3();
}

#include <iostream>
#include "ArrayList.h"

    //class Box {

    //public:
    //Box(int value):data(new int(value)) {}

    //~Box() {
        //delete data;
      //  data = nullptr;
    //}

    //int value() {
      //  return *data;
    //}
    //private:
    //int *data;

//};

int main() {

 //   int* p = new int(5);

   // std::cout << *p << std::endl;
    // std::cout << p << std::endl;

   // delete p;
 //   p = nullptr;

  /*  Box *box1 = new Box(8);
    std::cout << box1->value() << std::endl;

    delete box1;


    return 0;
*/

    ArrayList<string> list;


    list.addBack("Banna");
    list.addBack("Apple");

    list.printArray();


    return 0;

    };


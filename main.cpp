
#include "fifo_queue.hpp"
#include <string>
#include <iostream>

int main(void)
{
    Queue<std::string> s;
    std::cout << "Size: " << s.size() << std::endl;
    s.enqueue("lala");
    std::cout << "Size: " << s.size() << std::endl;
    s.dequeue();
    std::cout << "Size: " << s.size() << std::endl;

    return 0;
}
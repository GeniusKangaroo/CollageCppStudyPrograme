#include "client.h"

#include <iostream>

int main()
{
    Client c1("Alice");
    Client c2("Bob");

    std::cout << "Server name: " << Client::GetServerName() << std::endl;
    std::cout << "Number of clients: " << Client::GetClientNum() << std::endl;

    Client::ChangeServerName("newserver");

    std::cout << "Server name: " << Client::GetServerName() << std::endl;
    std::cout << "Number of clients: " << Client::GetClientNum() << std::endl;

    return 0;
}

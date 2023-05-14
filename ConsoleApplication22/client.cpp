#include "client.h"

#include <iostream>

std::string Client::s_serverName = "localhost";
int Client::s_clientNum = 0;

Client::Client(const std::string& name)
    : m_name(name)
{
    ++s_clientNum;
}

Client::~Client()
{
    --s_clientNum;
}

std::string Client::GetName() const
{
    return m_name;
}

std::string Client::GetServerName()
{
    return s_serverName;
}

int Client::GetClientNum()
{
    return s_clientNum;
}

void Client::ChangeServerName(const std::string& newServerName)
{
    s_serverName = newServerName;
}

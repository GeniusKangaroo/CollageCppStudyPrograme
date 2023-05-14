#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string m_name;
    static std::string s_serverName;
    static int s_clientNum;

public:
    Client(const std::string& name);
    ~Client();

    std::string GetName() const;
    static std::string GetServerName();
    static int GetClientNum();
    static void ChangeServerName(const std::string& newServerName);
};

#endif // !CLIENT_H

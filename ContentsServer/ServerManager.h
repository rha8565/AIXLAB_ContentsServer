#pragma once
#include <unordered_map>
#include "ClientInfo.h"

using namespace std;

class ServerManager final
{
public:
	ServerManager();
	~ServerManager();
	unordered_map<string, ClientInfo*> GetClientMap() const;
	void ParsingClientInfo();

private:
	unordered_map<string, ClientInfo*> mClientMap;

};
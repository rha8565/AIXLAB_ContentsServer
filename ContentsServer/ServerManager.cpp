#include "ServerManager.h"
#include <filesystem>
#include <fstream>
#include "include/json/json.h"
#include "ServerForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

ServerManager::ServerManager()
{
	ParsingClientInfo();
}

ServerManager::~ServerManager()
{
	for (auto elem : mClientMap) {
		delete elem.second;
	}
}

unordered_map<string, ClientInfo*> ServerManager::GetClientMap() const
{
	return mClientMap;
}

void ServerManager::ParsingClientInfo()
{
	std::ifstream JsonFile;
	Json::Value JsonValue;
	Json::Reader JsonReader;

	JsonFile.open("CDKeyInfo.json", std::ifstream::in);
	System::Diagnostics::Debug::Assert(JsonFile.is_open(), " Assertion error! \n clientinfo json file is missing!");
	System::Diagnostics::Debug::Assert(JsonReader.parse(JsonFile, JsonValue), " Assertion error! \n json file parsing failed !");

	mClientMap.clear();
	for (Json::Value elem : JsonValue["ClientInfo"])
	{
		System::Diagnostics::Debug::WriteLine(elem["DueDate"].asUInt());
		mClientMap[elem["CDKey"].asCString()] = new ClientInfo(elem["Client"].asCString(), elem["DueDate"].asUInt(), elem["MaxConnectNum"].asUInt());
	}
	JsonFile.close();
}

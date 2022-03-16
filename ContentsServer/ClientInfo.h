#pragma once
#include <string>
#include <unordered_map>
#include <memory>

using namespace std;
class ClientInfo final
{
public:
	ClientInfo() = delete;
	ClientInfo(const string& ClientName, const uint32_t& DueDate, const uint32_t& mMaxConnectNum)
		: mClientName(ClientName)
		, mDueDate(DueDate)
		, mMaxConnectNum(mMaxConnectNum)
		, mConnectNum(0)
	{
	};

	string GetClientName() const {
		return mClientName;
	}

	uint32_t GetDueDate() const {
		return mDueDate;
	}

	uint32_t GetConnectNum() const {
		return mConnectNum;
	}

	uint32_t GetmMaxConnectNum() const {
		return mMaxConnectNum;
	}


private:
	const string mClientName;
	uint32_t mDueDate;
	uint32_t mConnectNum;
	uint32_t mMaxConnectNum;
};

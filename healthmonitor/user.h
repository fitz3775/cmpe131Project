#pragma once
#include <string>
using namespace std;

class user
{

public:
	user();
	user(string username, string pass);
	~user();
	bool verifyUser(string username, string pass);
	void dataEntry();
};


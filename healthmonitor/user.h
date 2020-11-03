#pragma once
#include <string>
using namespace std;

class user
{
private:
	string username, pass;
	int hr, bp, steps, act, cal_in, cal_out, weight;
	char gender;
	struct age {
		int day, month, year;
	};
	struct height {
		int feet, inch;
	};


public:
	user();
	user(string username, string pass);
	~user();
	bool verifyUser(string username, string pass);
	void dataEntry();
	void set_Pass(string new_pass);
	string get_Pass();
	void set_Height(struct new_Height);
	string get_Height();
	void set_hr(int new_hr);
	int get_hr();
	void set_bp(int new_bp);
	int get_bp();
	void set_steps(int new_steps);
	int get_steps();
	void set_act(int new_act);
	int get_act();
	void set_cal_in(int new_cal_in);
	int get_cal_in();
	void set_cal_out(int new_cal_out);
	int get_cal_out();
	void set_weight(int new_weight);
	int get_weight();
};

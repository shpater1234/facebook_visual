#ifndef __ADMIN_H
#define __ADMIN_H

#include "memberArray.h"
#include "fansPageArray.h"
#include "date.h"

class Admin
{
	MemberArray allMembers;
	FansPageArray allPages;

public:
	Admin();

	const MemberArray& getMemberArray() const { return allMembers; }
	const FansPageArray& getFansPageArrary() const { return allPages; }

	void menu();
	void addFriend(const char* name, const Date& date);
	void addFansPage(const char* name);
	void show() const;

private:
	Admin(const Admin&);
};

#endif // __ADMIN_H
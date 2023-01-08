#include "videoStatus.h"

#include <iostream>
#include <string>
using namespace std;

/********* Show *********/

void VideoStatus::toOs(ostream& os) const
{
	string command = "start " + filePath;

	system(command.c_str());
}

/******** Operators *******/

bool VideoStatus::operator==(const VideoStatus& other)const
{
	return filePath == other.filePath;
}

bool VideoStatus::operator!=(const VideoStatus& other)const
{
	return !(filePath == other.filePath);
}

bool VideoStatus::operator==(const Status& other) const
{
	const VideoStatus* temp = dynamic_cast<const VideoStatus*>(&other);

	if (temp)
		return filePath == temp->filePath;

	return false;
}

bool VideoStatus::operator!=(const Status& other) const
{
	return !(*this == other);
}
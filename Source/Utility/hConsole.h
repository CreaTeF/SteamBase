/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-04-08
	Notes:
		Nicely formated console messages.
*/

#pragma once

class hConsole
{
	static bool LogToFile;
	static std::queue<std::string> MessageQueue;
	static std::string Filename;

public:
	static bool InitializeConsole(const char *FileLogName = nullptr);
	static void StartPrinting();

	static void EnqueueMessage(const char *Source, const char *Message, const char *Data);
	static void EnqueueFragmented(uint32_t FragmentCount, const char *Source, const char **Message, const char **Data);
};
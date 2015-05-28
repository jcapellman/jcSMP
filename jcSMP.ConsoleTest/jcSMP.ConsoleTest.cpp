#include "stdafx.h"

using namespace System;
using namespace jcSMPLib;

bool startServer() {
	jcSMPServer ^server = gcnew jcSMPServer();

	if (!server->StartServer()) {
		Console::WriteLine("Could not start Server");
		return false;
	} else {
		Console::WriteLine("Listening on Port 8885");
	}

	return true;
}

bool isValidOption(int inputOption) {
	return inputOption > 0 && inputOption < 4;
}

int main(array<System::String ^> ^args) {
    Console::WriteLine(L"jcSMP");
	Console::WriteLine(L"1)Start Server");
	Console::WriteLine(L"2)Connect");
	Console::WriteLine(L"3)Exit");
	Console::Write(":>");
	
	int inputInt;

	do {
		auto inputOptionString = Console::ReadLine();

		if (!int::TryParse(inputOptionString, inputInt) || !isValidOption(inputInt)) {
			Console::WriteLine("Invalid Option");
			Console::Write(":>");
		}
	} while (!isValidOption(inputInt));

	switch (inputInt) {
		case 1:
			startServer();
			break;
		case 2:
			break;
		case 3:
			break;
	}

	Console::ReadKey();

    return 0;
}

#pragma once
#include <string>

class Interrogate {

private:
	string selectedSuspectFile;

public:
	void begin();
	void interrogate();
	void trySomethingElse();
 };
#pragma once

#include "user-interface.h"
#include "input-handler.h"
#include "file-service.h"

class App {
	public:
		bool isRunning;
		UserInterface userInterface;
		InputHandler handler;

		App(bool isRunning);
		void startLoop();
};

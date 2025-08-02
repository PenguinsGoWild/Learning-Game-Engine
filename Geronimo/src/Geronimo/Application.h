#pragma once

#include "Core.h"

namespace Geronimo {
	class GERONIMO_API Application
	{
	public:
		Application();
		virtual ~Application();

        void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();


};

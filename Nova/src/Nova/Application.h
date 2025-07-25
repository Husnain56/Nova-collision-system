#pragma once

#include "Core.h"

namespace Nova {
	class NOVA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}


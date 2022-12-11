#pragma once

#include "Core.h"


namespace Cactus {

	class CACTUS_API Application
	{
	public:
		void Run();
	};

	Application* CreateApplication();

}

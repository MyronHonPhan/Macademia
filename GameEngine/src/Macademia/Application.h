#pragma once
#include "Core.h"

namespace Macademia {
	class MACADEMIA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

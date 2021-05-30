#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application()
		{
			// have to make it virtual as it will be inherentied by Actual Sandbox;
		};
		
		void Run();

	};

	// to be defined in CLIENT
	Application* CreateApplication();

}




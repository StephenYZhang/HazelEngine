#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

//  using extern int x; tells the compiler that an object of type int called x exists somewhere.
extern Hazel::Application* Hazel::CreateApplication();// create in the cliennt

int main(int argc, char** argv)
{
	//printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif //  HZ_PLATFORM_WINDOWS

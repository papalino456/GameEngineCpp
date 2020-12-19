#pragma once
#include <Windows.h>
class Window
{
public:
	Window();
	//initialize window
	bool init();
	//release window
	bool release();


	bool broadcast();
	bool isRun();

	//EVENTS
	virtual void onCreate() = 0;
	virtual void onUpdate() = 0;
	virtual void onDestroy();

	~Window();
protected:
	HWND m_hwnd;
	bool m_is_run;
};


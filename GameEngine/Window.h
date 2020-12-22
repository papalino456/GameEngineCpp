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

	RECT getClientWindowRect();
	void setHWND(HWND hwnd);

	//EVENTS
	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();

	~Window();
protected:
	HWND m_hwnd;
	bool m_is_run;
};


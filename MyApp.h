#ifndef __MYAPP_WX__
#define __MYAPP_WX__

class MyApp : public wxApp
{
private:
	/* data */
public:
	MyApp(/* args */);
	~MyApp();
	virtual bool OnInit();
};

#endif // !__MYAPP_WX__

// the configured options generated by cmake
// please don't modify it manually unless you know what you are doing

/* #undef BEHAVIAC_RELEASE_CUSTOMIZED */

// if BEHAVIAC_VERSION_MODE is set 'ForeUseRelease', BEHAVIAC_RELEASE will be defined as 1, 
// if BEHAVIAC_VERSION_MODE is set 'Default', BEHAVIAC_RELEASE_CUSTOMIZED will not be defined, 
// so that BEHAVIAC_RELEASE is not defined, so that in config.h, BEHAVIAC_RELEASE will be defined as 1 on Release
// http://www.behaviac.com/docs/zh/articles/build/ for more info
#ifdef BEHAVIAC_RELEASE_CUSTOMIZED
	#define BEHAVIAC_RELEASE 		0
#endif

#define BEHAVIAC_VERSION_STRING 	"3.6.31"


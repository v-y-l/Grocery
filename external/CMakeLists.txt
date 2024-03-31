include(FetchContent)

FetchContent_Declare(
	cpp_httplib
	GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
	GIT_TAG v0.15.3
)

FetchContent_GetProperties(cpp_httplib)
if(NOT cpp_httplb_POPULATED)
	FetchContent_Populate(cpp_httplib)
	add_library(httplib INTERFACE)
	target_include_directories(httplib INTERFACE ${cpp_httplib_SOURCE_DIR})
endif()

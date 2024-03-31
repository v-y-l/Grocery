#include <httplib.h>
#include <iostream>

int main(void) {
	httplib::Server svr;
	svr.Get("/ping", [](const httplib::Request&, httplib::Response& res) {
		res.set_content("Pong", "text/plain");
	});
	svr.listen("localhost", 8080);
	return 0;
}

#include <httplib.h>
#include <iostream>

#include "grocery.pb.h"
#include "writer.hpp"

int main(void) {
	Writer w;
	w.writeRecord();

	httplib::Server svr;

	svr.Get("/ping", [](const httplib::Request&, httplib::Response& res) {
		res.set_content("pong", "text/plain");
	});
	svr.Get("/ping_proto", [](const httplib::Request&, httplib::Response& res) {
		grocery::Item item;
		item.set_name("pong from proto");
		res.set_content(item.name(), "text/plain");
	});

	svr.listen("localhost", 8080);
	return 0;
}

#ifndef HEADER_TYPE_HPP
#define HEADER_TYPE_HPP

struct path_t {
	std::string property_file_path;
	std::string log_file_path;
	std::string www_dir;
	std::string data_dir;
};

struct option_t {
	struct {
		std::string host;
		int port = 0;
	} server;
};

#endif // HEADER_TYPE_HPP

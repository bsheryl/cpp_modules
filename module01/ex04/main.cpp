#include <iostream>
#include <fstream>

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Invalid argument." << std::endl
			<< "Must be: ./replace <file name> <find string> <replace string> "
			<< std::endl;
	} else if (std::string(argv[1]).length() == 0
			|| std::string(argv[2]).length() == 0
			|| std::string(argv[3]).length() == 0) {
		std::cout << "Invalid arguments" << std::endl;
	} else {
		std::ifstream ifs(argv[1]);
		if (!ifs) {
			std::cout << "Error: file <" << argv[1] << "> not found" << std::endl;
			return (0);
		}
		std::string line;
		std::string fileReplace(argv[1]);
		fileReplace = fileReplace + ".replace";
		std::ofstream ofs(fileReplace);
		std::string findString(argv[2]);
		std::string replaceString(argv[3]);

		while (!ifs.eof()) {
			std::getline(ifs, line);
			size_t pos = 0;
			while (pos != std::string::npos) {
				pos = line.find(findString);
				if (pos != std::string::npos) {
					ofs << line.substr(0, pos);
					ofs << replaceString;
					line = line.substr(pos + findString.length());
				} else {
					ofs << line;
					if (!ifs.eof())
						ofs << std::endl;
				}
			}
		}
		ifs.close();
		ofs.close();
	}
	return (0);
}
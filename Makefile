.PHONY: *

init:
	sudo apt install build-essential
	sudo apt install cmake
	sudo pip install conan
	conan profile detect

sync:
	conan install . --output-folder=build --build=missing --settings=build_type=Debug

build:
	cd build && cmake .. -G "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=./conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Debug && cmake --build .

tests:
	cd build && ctest . --output-on-failure
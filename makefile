test:
	g++ wxWidgets_test.cpp `wx-config --cxxflags --libs`  -o built/wxWidgets_test

button:
	g++ test_button.cpp `wx-config --cxxflags --libs`  -o built/test_button

update:
	g++ test_update.cpp `wx-config --cxxflags --libs`  -o built/test_update

cmake_minimum_required(VERSION  3.10)

project(Player VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("F:/libvlc-3.0.20/include")
link_directories("F:/libvlc-3.0.20/lib")


find_package(Qt6 REQUIRED Widgets UiTools)

set(PROJECT_SOURCES WIN32
	main.cpp
	Player.cpp
	Player.ui
	Res.qrc
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE libvlc libvlccore Qt6::Widgets Qt6::UiTools)

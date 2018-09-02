cmake_minimum_required(VERSION 3.10)
project(GAME)
file(GLOB Game_SRC
	"*.cpp"
	)
add_executable(Game ${Game_SRC})

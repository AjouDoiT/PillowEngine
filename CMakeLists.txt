cmake_minimum_required(VERSION 2.8)

project(PillowEngine)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(PillowEngine src/main.cpp)

target_link_libraries(PillowEngine
	OpenGL32
	glew32
	glew32s
	glfw3dll
	glm_static
	CEGUIBase-0_d
	CEGUIOpenGLRenderer-0_d
)

add_custom_command(TARGET PillowEngine POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_if_different
	${PROJECT_SOURCE_DIR}/dll/glfw3.dll
	$<TARGET_FILE_DIR:PillowEngine>)
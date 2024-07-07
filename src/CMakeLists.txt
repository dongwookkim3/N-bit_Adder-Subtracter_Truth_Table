file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS "*.cpp" , "*.h")

add_executable(${PROJECT_NAME}
        ${SOURCE_FILES}
)
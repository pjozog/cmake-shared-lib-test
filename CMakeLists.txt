add_library (cuda SHARED cuda.cpp cuda.hpp)
add_library (vision SHARED vision.cpp vision.hpp)

# commenting out this line breaks linking main...
target_link_libraries (vision cuda)

add_executable (main main.cpp)
target_link_libraries (main vision)

# ...unless this is uncommented
# target_link_libraries (main cuda)

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/cazzaro_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cazzaro_autogen.dir/ParseCache.txt"
  "cazzaro_autogen"
  )
endif()

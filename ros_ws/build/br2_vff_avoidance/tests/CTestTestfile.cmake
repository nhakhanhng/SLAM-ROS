# CMake generated Testfile for 
# Source directory: /SLAM/ros_ws/src/book_ros2/br2_vff_avoidance/tests
# Build directory: /SLAM/ros_ws/build/br2_vff_avoidance/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(vff_test "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/SLAM/ros_ws/build/br2_vff_avoidance/test_results/br2_vff_avoidance/vff_test.gtest.xml" "--package-name" "br2_vff_avoidance" "--output-file" "/SLAM/ros_ws/build/br2_vff_avoidance/ament_cmake_gtest/vff_test.txt" "--command" "/SLAM/ros_ws/build/br2_vff_avoidance/tests/vff_test" "--gtest_output=xml:/SLAM/ros_ws/build/br2_vff_avoidance/test_results/br2_vff_avoidance/vff_test.gtest.xml")
set_tests_properties(vff_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/SLAM/ros_ws/build/br2_vff_avoidance/tests/vff_test" TIMEOUT "60" WORKING_DIRECTORY "/SLAM/ros_ws/build/br2_vff_avoidance/tests" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/SLAM/ros_ws/src/book_ros2/br2_vff_avoidance/tests/CMakeLists.txt;2;ament_add_gtest;/SLAM/ros_ws/src/book_ros2/br2_vff_avoidance/tests/CMakeLists.txt;0;")
subdirs("../gtest")

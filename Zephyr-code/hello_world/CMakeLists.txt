# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.21.0)

set(BOARD esp32s3)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

# This is necessary for Sonarlint tools
# If enabled, generates a compile_commands.json file containing the exact compiler calls for all 
# translation units of the project in machine-readable form.
# Note: This option currently does not work well in combination with the UNITY_BUILD target 
# property or the CMAKE_UNITY_BUILD variable.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

target_sources(app PRIVATE src/main.c)
cmake_minimum_required(VERSION 3.30)
project(BankProject)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/libs/json/single_include)


add_executable(BankProject main.cpp
        User.cpp
        User.h
        Registration.cpp
        Registration.h
        utils/UUID.h
        account/Account.cpp
        account/Account.h
        utils/DateUtil.cpp
        utils/DateUtil.h
        bank/Bank.cpp
        bank/Bank.h
  "Trasaction.h" "Trasaction.cpp")


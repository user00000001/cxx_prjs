# aux_source_directory(. DIR_SRCS)
# add_executable(000 ${DIR_SRCS})

include_directories(include)

add_executable(Factory main_factory.cpp Product.cpp Factory.cpp)
add_executable(AbstractFactory main_abstract_factory.cpp Product.cpp AbstractFactory.cpp)
add_executable(Singleton  main_singleton.cpp  Singleton.cpp)
add_executable(Builder  main_builder.cpp  Builder.cpp Director.cpp P1roduct.cpp)
add_executable(Prototype  main_prototype.cpp  Prototype.cpp)
add_executable(Bridge  main_bridge.cpp  Abstraction.cpp AbstractionImp.cpp)
add_executable(Adapter  main_adapter.cpp  Adapter.cpp)
add_executable(A1dapter  main_a1dapter.cpp  A1dapter.cpp)
add_executable(Decorator  main_decorator.cpp  Decorator.cpp)

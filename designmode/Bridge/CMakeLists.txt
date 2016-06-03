#设置项目名称
PROJECT(test)

#要求CMake的最低版本为2.8
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

#添加头文件搜索路径
INCLUDE_DIRECTORIES(/usr/local/include)

#添加库文件搜索路径
LINK_DIRECTORIES(/usr/local/lib /home/addison/Downloads/software/boost_1_53_0/stage/lib)

#用于将当前目录下的所有源文件的名字保存在变量 DIR_SRCS 中
AUX_SOURCE_DIRECTORY(. DIR_SRCS)

#用于指定从一组源文件 source1 source2 … sourceN(在变量DIR_SRCS中定义)
#编译出一个可执行文件且命名为CMake_Tutorial1
ADD_EXECUTABLE(test ${DIR_SRCS})

#添加编译可执行程序所需要的链接库、如果有多个中间用空格隔开
#第一个参数是可执行程序名称，第二个开始是依赖库
#在这里根据名字boost_thread去寻找libboost_thread.a文件
#TARGET_LINK_LIBRARIES(test boost_thread /home/addison/Downloads/software/boost_1_53_0/stage/lib/libboost_filesystem.so.1.53.0 /home/addison/Downloads/software/boost_1_53_0/stage/lib/libboost_system.so.1.53.0)

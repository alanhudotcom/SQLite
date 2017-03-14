# SQLite
SQLite-native调用相关
本工程尝试在NDK中执行SQLite的内置命令，PRAGMA、dump等，简单提供获取当前系统SQLite的版本及提供导出数据库与导入数据库的jni实现。本project，旨在对SQLite常用命令的简单使用与分析，故而以系统sqlite.so为链接库，打的共享包。以此为延伸，可根据需要考虑自行编译修改SQLite源码文件，打自己的sqlite.so库，进行JNI调用，从而最大地定制化自身所需要的SQLite实现。本工程所依赖libsqlite.so文件，来自华为荣耀6P，开发环境Mac系统，对应将该libsqlite.so文件放置在/Users/huyong/development/android-ndk-r10d/toolchains/mips64el-linux-android-4.9/prebuilt/darwin-x86_64/lib/gcc/mips64el-linux-android/4.9目录下，编译出libsqliteDB.so库文件即可。放进所需项目中即可直接使用。

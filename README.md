# CPU load

## 编译方法

在cpuload目录下执行```{NDK路径}\ndk-build.cmd NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk NDK_APPLICATION_MK=./Application.mk```

生成文件：cpuload\libs\armeabi\cpu

**cpuload\cpu为已编译好的可执行文件，可直接使用**

## 使用方法

```
adb push cpu /data/
adb shell chmod 777 /data/cpu
adb shell 
./data/cpu&   #运行一个cpu实例，可多次执行，运行多个
```
直接使用kill pid进行关闭

# Memory load

## 编译方法

在memoryload目录下执行```{NDK路径}\ndk-build.cmd NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk NDK_APPLICATION_MK=./Application.mk```

生成文件：memoryload\libs\armeabi\memory

**memoryload\memory为已编译好的可执行文件，可直接使用**

## 使用方法

```
adb push memory /data/
adb shell chmod 777 /data/memory
adb shell
./data/memory 500&      #运行一个memory实例，占用500M内存空间，可多次执行，运行多个
```
直接使用kill pid进行关闭

# IO load

直接使用android自带dd工具即可

## 命令示例

`dd if=/dev/zero of=/sdcard/iofile bs=100m count=10 & `

## 作用 

向sdcard写入100m的文件，连续写入10次。可根据具体情况修改参数,或多次执行
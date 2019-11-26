"# GAZEBO_Visualstudio2019" <br />
<br />
Run procedure<br />
=============<br />
1. d:\vcpkg>vcpkg install --triplet x64-windows boost-thread boost-signals boost-filesystem boost-program-options boost-iostreams boost-asio boost-chrono boost-date-time boost-property-tree boost-uuid cppzmq curl dlfcn-win32 freeimage  qwt tbb zeromq zlib zziplib sdformat6 protobuf<br />
<br />
​2. d:\vcpkg>vcpkg install --triplet x64-windows ignition-math4 ignition-msgs1 ignition-transport4​<br />
<br />
​3. d:\vcpkg>vcpkg install --triplet x64-windows Qt5​<br />
<br />
4. <br />
HOME=D:\gz-ws<br />
GAZEBO_MASTER_URI=http://localhost:11345<br />
GAZEBO_MODEL_DATABASE_URI=http://models.gazebosim.org<br />
GAZEBO_RESOURCE_PATH=D:\gz-ws\share\gazebo-10<br />
GAZEBO_PLUGIN_PATH=D:\gz-ws\lib\gazebo-10\plugins<br />
GAZEBO_MODEL_PATH=D:\gz-ws\share\gazebo-10\models<br />
OGRE_RESOURCE_PATH=D:\gz-ws\bin\Debug<br />
PATH=%PATH%;D:\gz-ws\bin;D:\gz-ws\bin\Debug;D:\gz-ws\lib;D:\vcpkg\installed\x64-windows\debug\bin;D:\vcpkg\installed\x64-windows\bin<br />
<br />
5. d:\gz-ws\bin>gzserver<br />
   d:\gz-ws\bin>gzclient<br />
<br />
BLOB :<br />
   https://blog.naver.com/jerry1455/221705269524<br />
   https://blog.naver.com/jerry1455/221706823838<br />
   https://blog.naver.com/jerry1455/221708318229<br />
   https://blog.naver.com/jerry1455/221708318229<br />
   https://blog.naver.com/jerry1455/221711338809<br />
   https://blog.naver.com/jerry1455/221718777650<br />
<br />

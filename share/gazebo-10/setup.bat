@echo off
set HOME=%HOMEDRIVE%%HOMEPATH%
set GAZEBO_MASTER_URI=http://localhost:11345
set GAZEBO_MODEL_DATABASE_URI=http://models.gazebosim.org
set GAZEBO_RESOURCE_PATH=D:\gz-ws\share\gazebo-10;%GAZEBO_RESOURCE_PATH%
set GAZEBO_PLUGIN_PATH=D:\gz-ws\lib\gazebo-10\plugins;%GAZEBO_PLUGIN_PATH%
set GAZEBO_MODEL_PATH=D:\gz-ws\share\gazebo-10\models;%GAZEBO_MODEL_PATH%
set LD_LIBRARY_PATH=%LD_LIBRARY_PATH%;D:\gz-ws\lib\gazebo-10\plugins
<<<<<<< HEAD
set OGRE_RESOURCE_PATH=D:/gz-ws/lib/Debug/opt
=======
set OGRE_RESOURCE_PATH=D:\gz-ws\lib\debug\opt
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
set PATH=%LD_LIBRARY_PATH%;%PATH%

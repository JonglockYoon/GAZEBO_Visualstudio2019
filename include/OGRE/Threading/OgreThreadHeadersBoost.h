/*-------------------------------------------------------------------------
This source file is a part of OGRE
(Object-oriented Graphics Rendering Engine)

For the latest info, see http://www.ogre3d.org/

<<<<<<< HEAD
Copyright (c) 2000-2014 Torus Knot Software Ltd
=======
Copyright (c) 2000-2012 Torus Knot Software Ltd
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE
-------------------------------------------------------------------------*/
#ifndef __OgreThreadHeadersBoost_H__
#define __OgreThreadHeadersBoost_H__

<<<<<<< HEAD
#if OGRE_COMPILER == OGRE_COMPILER_CLANG || OGRE_COMPILER == OGRE_COMPILER_GNUC
#   pragma GCC diagnostic push
#if OGRE_COMPILER == OGRE_COMPILER_GNUC
#   pragma GCC diagnostic ignored "-Wpragmas"
#elif OGRE_COMPILER == OGRE_COMPILER_CLANG
#   pragma GCC diagnostic ignored "-Wdocumentation"
#   pragma GCC diagnostic ignored "-Wconstexpr-not-const"
#endif
=======
#if OGRE_COMPILER == OGRE_COMPILER_CLANG || OGRE_COMPILER == OGRE_COMPILER_GCC
#   pragma GCC diagnostic push
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#   pragma GCC diagnostic ignored "-Wshadow"
#   pragma GCC diagnostic ignored "-Wpadded"
#   pragma GCC diagnostic ignored "-Wweak-vtables"
#   pragma GCC diagnostic ignored "-Wall"
<<<<<<< HEAD
#   pragma GCC diagnostic ignored "-Wshorten-64-to-32"
#   pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#   pragma GCC diagnostic ignored "-Wunused-variable"
#   pragma GCC diagnostic ignored "-Wundef"
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#endif

#include <boost/thread/tss.hpp>
#include <boost/thread/recursive_mutex.hpp>
#include <boost/thread/condition.hpp>
#include <boost/thread/thread.hpp>
#include <boost/thread/shared_mutex.hpp>
#include <boost/thread/locks.hpp>

<<<<<<< HEAD
#if OGRE_COMPILER == OGRE_COMPILER_CLANG || OGRE_COMPILER == OGRE_COMPILER_GNUC
=======
#if OGRE_COMPILER == OGRE_COMPILER_CLANG || OGRE_COMPILER == OGRE_COMPILER_GCC
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#   pragma GCC diagnostic pop
#endif

#endif

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
<<<<<<< HEAD
// ATTENTION: No header guard as this header is meant to be included
// multiple times.
//#ifndef __OgreHeaderSuffix_H__
//#define __OgreHeaderSuffix_H__

#if OGRE_COMPILER == OGRE_COMPILER_MSVC && OGRE_PLATFORM != OGRE_PLATFORM_WINRT
=======
#ifndef __OgreHeaderSuffix_H__
#define __OgreHeaderSuffix_H__

#include "OgrePrerequisites.h"

#if OGRE_COMPILER == OGRE_COMPILER_MSVC
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

// restore previous warnings settings
#   pragma warning (pop)


#endif


<<<<<<< HEAD
//#endif
=======
#endif
// allow inclusion of prefix again now (this is scoped)
#undef __OgreHeaderSuffix_H__


>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
/*
-----------------------------------------------------------------------------
This source file is part of OGRE
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
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#ifndef __COMMON_OGRE_ERRORDIALOG_H__
#define __COMMON_OGRE_ERRORDIALOG_H__

#include "OgrePrerequisites.h"
#include "OgrePlatform.h"

// Bring in the specific platform's header file
#if defined OGRE_GUI_WIN32
# include "WIN32/OgreErrorDialogImp.h"
#elif defined OGRE_GUI_gtk
# include "gtk/OgreErrorDialogImp.h"
#elif defined OGRE_GUI_GLX
# include "GLX/OgreErrorDialogImp.h"
#elif OGRE_PLATFORM == OGRE_PLATFORM_WIN32
# include "WIN32/OgreErrorDialogImp.h"
<<<<<<< HEAD
#elif OGRE_PLATFORM == OGRE_PLATFORM_WINRT
# include "WIN32/OgreErrorDialogImpWinRT.h"
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#elif OGRE_PLATFORM == OGRE_PLATFORM_LINUX
# include "GLX/OgreErrorDialogImp.h"
#elif OGRE_PLATFORM == OGRE_PLATFORM_NACL
# include "NaCl/OgreErrorDialogImp.h"
#elif OGRE_PLATFORM == OGRE_PLATFORM_APPLE
# include "OSX/OgreErrorDialogImp.h"
#elif OGRE_PLATFORM == OGRE_PLATFORM_APPLE_IOS
# include "iOS/OgreErrorDialogImp.h"
#elif OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
# include "Android/OgreErrorDialogImp.h"
#endif

#endif

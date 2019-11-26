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

#ifndef __GLPBUFFER_H__
#define __GLPBUFFER_H__

#include "OgreGLPrerequisites.h"

namespace Ogre {
    /** An off-screen rendering context. These contexts are always RGBA for simplicity, speed and
        convience, but the component format is configurable.
    */
    class _OgreGLExport GLPBuffer
    {
    public:
<<<<<<< HEAD
        GLPBuffer(PixelComponentType format, uint32 width, uint32 height);
=======
        GLPBuffer(PixelComponentType format, size_t width, size_t height);
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        virtual ~GLPBuffer();
        
        /** Get the GL context that needs to be active to render to this PBuffer.
        */
        virtual GLContext *getContext() = 0;
        
        PixelComponentType getFormat() { return mFormat; }
<<<<<<< HEAD
        uint32 getWidth() { return mWidth; }
        uint32 getHeight() { return mHeight; }
=======
        size_t getWidth() { return mWidth; }
        size_t getHeight() { return mHeight; }
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        
        /** Get PBuffer component format for an OGRE pixel format.
         */
        static PixelComponentType getPixelComponentType(PixelFormat fmt);
    protected:
        PixelComponentType mFormat;
<<<<<<< HEAD
        uint32 mWidth, mHeight;
=======
        size_t mWidth, mHeight;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
    };
    
}

#endif // __GLPBRENDERTEXTURE_H__
